#include "stdafx.h"

#include <stdio.h>
#include <string.h>

int main() {
	char str[100] = "Hello";
	
	char str1[] = "sample";
	char str2[] = "simple";

	 strcat(str, "World!"); // ���ڿ� �̾.

	 // str1�� str2���� ���� ������ �� �ʿ� �ִ�. -1
	 //                                          �� �ʿ� �ִ�. 1
	 //                                                     ����. 0

	int cmp = strcmp(str1, str2);

	printf("%s\n", str);

	printf("%d\n", cmp);
}