// Exp_55.cpp: �ܼ� ���� ���α׷��� �������� �����մϴ�.
//

// this : �ڱ� ��ü �ڽ��� ����Ű�� ������

#include "stdafx.h"
#include "iostream"

using namespace std;

class Myclass {
public:
	void PrintThis(Myclass *ptr) {
		cout << "���� �ּҴ� " << ptr << endl;
	}
};


int main()
{
	Myclass a, b; // ��ü a,b ����

	cout << "a�� �ּҴ� " << &a << endl;
	cout << "b�� �ּҴ� " << &b << endl;

	a.PrintThis(&a);
	b.PrintThis(&b);
}

