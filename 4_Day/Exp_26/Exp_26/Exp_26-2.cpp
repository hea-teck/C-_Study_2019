#include "stdafx.h"

#include <stdio.h>

/*

	1. arr = &arr[0]
	    ptr = &ptr[0]

	2. *ptr = ptr[0]

	3. ptr + 1 = ptr��  sizeof(*ptr)�� ���� ��
	   
*/

int main() {
	int arr[3] = { 1,2,3 }; // �� 12����Ʈ

	printf("arr = %d\n", arr);
	printf("arr + 1 = %d\n", arr + 1);

	printf("&arr = %d\n", &arr); // ��ü �迭�� �ּҰ��� [0]��° ���ڰ� ���� �ּҰ��� ����
	printf("&arr + 1 = %d\n", &arr + 1); // ���� �迭�� �Ѿ�� ���� �ǹ�. �� +12����Ʈ.
}