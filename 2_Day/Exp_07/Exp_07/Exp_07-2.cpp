// Exp_07.cpp: �ܼ� ���� ���α׷��� �������� �����մϴ�.

#include "stdafx.h"

#include <stdio.h>

int main()
{
	/*
	int a, b;

	// scanf -> Space or Enter �˾Ƽ� �ĺ��Ͽ� %d �Ҵ�.
	scanf("%d %d", &a, &b); // &: ������

	int hap = a + b;
	int cha = a - b;
	int gop = a * b;
	int mok = a / b;

	printf("%d + %d = %d\n", a, b, hap);
	printf("%d - %d = %d\n", a, b, cha);
	printf("%d * %d = %d\n", a, b, gop);
	printf("%d / %d = %d\n", a, b, mok);
	*/

	float a, b;

	scanf("&f &f", &a, &b);

	float hap = a + b;
	float cha = a - b;
	float gop = a * b;
	float mok = a / b;

	printf("%f + %f = %f\n", a, b, hap);
	printf("%f - %f = %f\n", a, b, cha);
	printf("%f * %f = %f\n", a, b, gop);
	printf("%d / %f = %f\n", a, b, mok);



}

