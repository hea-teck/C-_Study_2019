#include "stdafx.h"

#include <stdio.h>

// �ڿ��� �Է� : 12
// 1, 2, 3, 4, 6, 12

int main() {

	int n;

	printf("�ڿ����� �Է� : ");
	scanf("%d", &n);

	for (int i = 1; i <= n / 2; i++) {
		if (n%i == 0) {
			printf("%d,", i);
		}
	}printf("%d\n", n);

}