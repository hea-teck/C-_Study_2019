// Exp_48.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"
#include "stdio.h"

// getchar / putchar ==> scanf, printf 보다 속도가 빠르다.
// gets / puts

int main()
{
	/*char ch;

	ch = getchar(); // 입력받은 문자를 ch에 리턴.
	putchar(ch);*/

	char str[100];

	gets_s(str); // 배열 이용. call-by-reference. str은 &str[0] 이기 때문에.
	puts(str);
}

