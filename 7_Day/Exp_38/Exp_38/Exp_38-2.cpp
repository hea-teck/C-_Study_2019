#include "stdafx.h"
#include "stdio.h"

int main() {
	typedef int Pair[2]; // ũ�� 2�� int�� �迭 ����. �迭 �̸��� Pair. int�� Pair[2]�� ����ϰڴ�.
	Pair point = { 3,4 }; // int point[2] = {3,4}; Pare[2]���� �� �ʿ� ����, Pair�� �ᵵ ok

	printf("(%d, %d)\n", point[0], point[1]);
}