#include "stdafx.h"

#include <stdio.h>
#include <string.h>

int main() {
	char str[] = "Hello";
	char str2[100];
	
	int len;

	len = strlen(str);

	printf("���ڿ��� ���̴� %d\n", len);

	strcpy(str2, str);

	printf("str2�� �� : %s\n", str2);

}