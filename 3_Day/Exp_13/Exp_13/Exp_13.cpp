// Exp_13.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.

// 중첩 if문
// 중괄호 코딩 스타일

#include "stdafx.h"

#include <stdio.h>

int main()
{
	int a, b, c;

	scanf("%d%d%d", &a, &b, &c);

	if (a > b) {
		if (a > b) printf("%d\n", a);
		else printf("%d\n", c);
	}
	else if (b > c) printf("%d\n", b);
	else printf("%d\n", c);
}