#include "stdafx.h"

#include <stdio.h>

int main() {
	int arr[5] = { 3,1,4,1,5 };
	
	// �� ������ ������
	// sizeof(arr) / sizeof(int) = 20 / 4 = 5
	// �� �迭�� ũ�⸦ �� �� �ִ�.

	for (int i = 0; i < sizeof(arr) / sizeof(int); i++) {
		printf("%d", arr[i]);
	}
	printf("\n");
}