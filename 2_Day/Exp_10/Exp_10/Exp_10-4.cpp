// ��������� : �������� ����
// ��ġ�� ��ġ

#include "stdafx.h"
#include <stdio.h>

int main() {
	int a = 10;
	int b;

	printf("===��/��ġ ���� ���� === \n");

	//b = ++a; // a�� ���� ������Ű�� b�� �����ض�.

	b = a++; // a�� b�� ���� ���� ��, a�� �������Ѷ�.

	printf("a : %d\n", a);
	printf("b : %d\n", b);
	
}