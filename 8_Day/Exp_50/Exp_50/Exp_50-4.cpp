#include "stdafx.h"
#include "iostream"

using namespace std;

int main() {
	int a(5);
	
	int &r1 = a; // l-value : ������ �� �ִ�

	// int &r2 = 3; // 3�� �޸𸮿� ����Ǿ� �ִ� ���� �ƴϹǷ� ���۷��� ������ ���� ����
	int &&r2 = 3; // r-value : ������ �� ����

	// int &r3 = a * a // a * a �� ���̴�...
	int &&r3 = a * a; // r-value : ������ �� ����
}