#include "stdafx.h"

#include <stdio.h>

// do-while�� ȿ����. while�� �Ѱ� �ذ�

int main() {
	int n;

	do {
		printf("���� 0�� �Է����ּ���!!\n");
		scanf("%d", &n);
	} while (n != 0);

	printf("���� 0�� �Է��ϼ̱���!\n");
}