#include "stdafx.h"
#include "stdio.h"

/*
���ڿ��� �Ű������� �޾� �� ���ڿ����� ������ �����Ͽ� ����ϴ� �Լ��� �ۼ��غ�����.
*/

void print_noSpace(const char str[]) { // ���ڿ��� char���� �迭�� ���.
	for (int i = 0; str[i] != '\0'; i++) { // ���ڿ��� �������� �ι��ڰ� ����.
		if (str[i] != ' ') { // ���� ���� ����.
			printf("%c", str[i]); // ���ڿ��� �ϳ��� ���ڷ� ������ �۾�.
		}
	}
}

int main() {
	print_noSpace("Hello, World!\n");
	print_noSpace("My name is Huitaek\n");
}

//https://comfun.tistory.com/entry/printf-function%ED%95%A8%EC%88%98-s-c%EC%B0%A8%EC%9D%B4