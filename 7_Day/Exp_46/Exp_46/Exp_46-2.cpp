#include "stdafx.h"
#include "stdio.h"

// ����Ʈ (shift) : �ű��
// << : �������� ����Ʈ
// >> : ���������� ����Ʈ

int main() {
	char a = 22;

	printf("%d\n", a << 1);
	printf("%d\n", a << 3);
	printf("%d\n", a << 6);
	printf("%d\n", a >> 1);
	printf("%d\n", a >> 3);
	printf("%d\n", a >> 6);
}