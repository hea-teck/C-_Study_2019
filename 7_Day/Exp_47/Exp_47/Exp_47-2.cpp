#include "stdafx.h"
#include "stdio.h"

int main() {
	FILE *in; // ��Ʈ��
	int n;

	in = fopen("intput.txt", "r"); // intput.txt�� ���� ����

	if (in != nullptr){
		fscanf(in, "%d", &n);
		printf("%d\n", n);
		fclose(in);
	}
}