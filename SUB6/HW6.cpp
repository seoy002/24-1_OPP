#include <iostream>
#include <fstream>
using namespace std;

float getfrequency(char *hh) { //주파수가 return되는 함수
	float f= 1;
	switch (hh[0]) {
	case 'C': f = 261; return f;
	case 'D': f = 294; return f;
	case 'E': f = 330; return f;
	case 'F': f = 349; return f;
	case 'G': f = 392; return f;
	case 'A': f = 440; return f;
	case 'B': f = 494; return f;
	default: return 0.0;
	}
}

float getAmplitude(int ss) {// 진폭이 return 되는 함수
	return ss;
}

float getLength(int eu) {//시간이 return 되는 함수
	float T = 1.;
	if (eu == 4) T = 1.0;
	else if (eu == 2) T = 2.;
	else if (eu == 8) T = 0.5;
	return T;
}
//음표 사이 공백을 만드는 함수
void addSilence(ofstream& yy, int numSamples, int sampleRate) {
	for (int i = 0; i < numSamples; i++) {
		short value = 0;
		yy.write((char*)(&value), sizeof(short));
	}
}

int main() {
	ifstream xx("Beatles-LetItBe-wav_30s.wav", ios::binary | ios::in);
	if (!xx) return -1; 

	char header[44];
	xx.read(header, 44);
	xx.close();

	short* n;   n = (short*)(header + 22);
	*n = 1;
	int* fs;   fs = (int*)(header + 24);
	int* b;   b = (int*)(header + 28);
	*b = *n * *fs * sizeof(short);

	ofstream yy("my4.wav", ios::binary | ios::out);
	if (!yy) return -2;
	yy.write(header, 44 * sizeof(char)); 

	const int sampleRate = 44100;
	const int bitsPerSample = 16;
	const float pi = 3.141592;

	ifstream zz("text_file.txt");
	if (!zz) return -3;
	int numeu;
	zz >> numeu;
	int f, a, T, eu, ss;
	char hh[3];
	for (int i = 0; i < numeu; i++) {
		zz >> eu >> hh >> ss;
		T = getLength(eu);
		f = getfrequency(hh);
		a = getAmplitude(ss);
		int N = T * fs[0];
		short* data;
		data = new short[N];
		float dt = 1. / fs[0], a = 10000.0;
		for (int j = 0; j < N; j++) {
			data[j] = (short)(a * sin(2.0 * pi * f * j * dt));
		}
		yy.write((char*)data, N * sizeof(short));
		addSilence(yy, sampleRate * 0.1, sampleRate);
	}
	zz.close();
	yy.close();
	return 1;
}
