// Exp_08.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.

// char : 1바이트 정수형 (int: 4바이트)
// character : 문자 (반각문자 : A, b, 1, +, /) 한글, 한자, 일본어 NO

#include "stdafx.h"

#include <stdio.h>

int main()
{
	char a = 65;

	// 65 == 'A'

	printf("%d\n", a); //65
	printf("%d\n", 'A'); //65

	printf("%c\n", a); //A
	printf("%c\n", 'A'); //A

}

// ASCII : American Standard (문자 <-> 숫자)

