#include "stdafx.h"

#include <stdio.h>

int main() {
	int a = 10;

	int *ptr;
	ptr = &a; // ptr�� ���� a�� ����Ű�� �ִ� ����

	printf("a�� �� : %d\n", a);

	*ptr = 20; // a = 20�� ������ �ǹ�

	printf("a�� �� : %d\n", a);

}