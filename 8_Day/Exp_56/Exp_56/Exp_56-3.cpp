#include "stdafx.h"
#include "iostream"

using namespace std;

// ������ : ��� ���� �ʱ�ȭ
// ���Ҽ�(real : �Ǽ���, imag : �����)

class Complex {
public:
	Complex() {
		real = 0;
		imag = 0;
	}
	Complex(double real_, double imag_) { // �����ε�
		real = real_;
		imag = imag_;
	}
	double GetReal() { // get�Լ�
		return real;
	}
	void SetReal(double real_) { // set�Լ�
		real = real_;
	}
	double GetImag() { // get�Լ�
		return imag;
	}
	void SetImag(double imag_) { // set�Լ�
		imag = imag_;
	}

private:
	double real;
	double imag;
};

int main() {
	Complex c1; // �Ű������� ����
	Complex c2 = Complex(2, 3);
	Complex c3(2, 3);

	Complex c4 = { 2,3 };
	Complex c5 = Complex{ 2,3 };
	Complex c6{ 2,3 };

	cout << "C1= " << c1.GetReal() << ", " << c1.GetImag() << endl;
	cout << "C2= " << c2.GetReal() << ", " << c2.GetImag() << endl;
	cout << "C3= " << c3.GetReal() << ", " << c3.GetImag() << endl;
}