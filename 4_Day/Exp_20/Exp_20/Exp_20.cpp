// Exp_20.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"

#include <stdio.h>

int main()
{
	int a[5];

	for (int i = 0; i <= 4; i++) {
		a[i] = i * 5;
	}

	for (int i = 0; i <= 4; i++) {
		printf("%d\n", a[i]);
	}
}

