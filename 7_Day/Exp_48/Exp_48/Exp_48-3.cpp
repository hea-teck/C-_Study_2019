#include "stdafx.h"
#include "stdio.h"

// ����

#include "stdlib.h"
#include "time.h"

int main() {
	
	srand(time(NULL));

	// printf("%d\n", time(NULL)); // ����ð� ��ȯ : 1970/01/01 00:00:00�κ��� ���� �ð�, �� ����

	for (int i = 1; i <= 10; i++) {
		printf("%d\n", rand() % 10 + 1);
	}
}