#include "stdafx.h"
#include "stdio.h"

int main() {
	char ch;

	FILE *in = fopen("Exp_47-3.cpp", "r");

	while (fscanf(in, "%c", &ch) != EOF) {
		printf("%c", ch); // �ֿܼ� ���
	}
	fclose(in);
}