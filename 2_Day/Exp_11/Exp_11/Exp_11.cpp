// Exp_11.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.

// 비교 연산자, 논리 연산자

#include "stdafx.h"

#include <stdio.h>

int main()
{
	int a, b;
	scanf("%d%d", &a, &b);

	// bool : 진리값을 저장용 변수 (1바이트)
	bool p = a > b;
	bool q = a < b;
	bool r = a == b;

	// a >= b : a는 b보다 크거나 같다.
	// a <= b : a는 b보다 작거나 같다.
	// a != b : a는 b가 아니다.

	printf("%d\n", p);
	printf("%d\n", q);
	printf("%d\n", r);

}

