#include "stdafx.h"

#include <stdio.h>

int main() {
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };

	for (int i = 0; i < 10; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");

	for (int i = 0; i < 10; i++) {
		printf("%d ", *(arr + i)); // arr = &arr[0] , �� �迭�� i��°�� ���� ����ض�. �̶� �����ʹ� �� �ּҰ��� ���� �ǹ�
	}
	printf("\n");

	// arr = &arr[0], �� �����ͺ��� ptr�� �ʱ� �� &arr[0] ���� ����. '&arr[0] + 9' ��� ������. ptr++�� &arr[0] + 1 �� arr + 1 �̴�. ���� ĭ���� �Ѿ�� �ǹ̸� ��Ÿ��.
	for (int *ptr = arr; ptr < arr + 10; ptr++) {
		printf("%d ", *ptr); 
	}
	printf("\n");

}