// Exp_09.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.

// 두 숫자를 입력받아서 그 숫자들의 합을 출력하는 프로그램을 만들어 보세요.

#include "stdafx.h"

#include <stdio.h>

int main()
{
	int a, b;

	printf("두 숫자를 입력하세요.\n");
	scanf("%d%d", &a, &b);
	printf("두 숫자의 합은 : %d 입니다.\n", a + b);
}

