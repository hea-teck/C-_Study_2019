#include "stdafx.h"
#include "stdio.h"

int main() {

	int a = 10;
	int b = 20;

	int *ptr; // int�� ������ ����Ű�� ������ ���� ptr ����

	ptr = &a; // ������ ���� ptr�� a�� ����Ű�� ����
	*ptr = 30; // ������ ���� ptr�� ����Ű�� a�� ���� 30���� ����. �� a=30

	ptr = &b; // ������ ���� ptr�� b�� ����Ű�� ������ ����
	*ptr = 10; // ������ ���� ptr�� ����Ű�� b�� ���� 10���� ����. �� b=10

	printf("%d\n", a); // 30
	printf("%d\n", b); // 10
	printf("%d\n", *ptr); // 10

}