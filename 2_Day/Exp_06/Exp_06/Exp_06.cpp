// Exp_06.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"
#include <stdio.h>


int main()
{
	printf("%d %d %d %d\n", sizeof(int), sizeof(char), sizeof(float), sizeof(double));

	int a; char b; float c; double d;
	
	printf("%d %d %d %d\n", sizeof(a), sizeof(b), sizeof(c), sizeof(d));
}

