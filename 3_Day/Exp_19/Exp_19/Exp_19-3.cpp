#include "stdafx.h"

#include <stdio.h>

// ���� �ڸ����� 3, 6, 9�� ��� * ���
// 1 2 * 4 5 * 7 8 * 10 11 12 * 14 15 * 17 ...

int main() {
	int n;
	scanf("%d", &n);

	/*
	for (int i = 1; i <= n; i++) {
	if ( i % 3 == 0 && i <= 10) {
	printf("*");
	}
	else if (i % 3 == 1 && i > 10) {
	printf("*");
	}
	else if (i % 3 == 2 && i > 20) {
	printf("*");
	}else
	printf("%d", i);
	}

	3�Ƿ� ���� �������� ���� 0 -> 1-> 2 ... (�ڸ��� ������ ����)

	*/

	for (int i = 1; i <= n; i++) {
		int k = i % 10;
		if (k == 3 || k == 6 || k == 9) {
			printf("* ");
		}
		else
			printf("%d ", i);
	}
	printf("\n");


}
