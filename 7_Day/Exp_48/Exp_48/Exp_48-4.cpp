#include "stdafx.h"
#include "stdio.h"
#include "stdlib.h"

// exit(0); �׳� �ٷ� ����.

int main() {
	int sum = 0;

	for (int i = 0; i < 5; i++) { // n�� �����ϰ� �׳� 5�� �Է��� �� �ֵ���, i�� 5�� ��������.
		int n;

		scanf("%d", &n);

		if (n <= 0) {
			printf("INPUT ERROR\n");
			exit(0);
		}
		sum += n;
	}
	printf("%d\n", sum);
}