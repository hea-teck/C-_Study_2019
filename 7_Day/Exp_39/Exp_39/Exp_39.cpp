// Exp_39.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"
#include "stdio.h"

struct Point { int x, y; }; // Point라는 구조체는, int형 x와 y를 묶어서 만든 구조체이다.
//typedef struct { int x, y; } Point; // int형 x와 y를 묶어선 만든 구조체를 Point라고 하자.

int main()
{
	Point p;

	p.x = 3;
	p.y = 4;

	printf("(%d, %d)\n", p.x, p.y);
	printf("sizeof(p) = %d\n", sizeof(p));
}

