// Exp_03.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.

#include "stdafx.h"

int main()
{
	//%d : 정수 출력 (1, 2, 3, ... , 0, -1, -2, -3)
	printf("%d + %d = %d\n", 2, 3, 5);

	//%f : 실수 출력 (3.14, 2.0, -2.0 ...)
	printf("%f\n", 3.14); //자동으로 소숫점 여섯자리까지 출력
	printf("%.2f\n", 3.141592); //.2f에 의해 소숫점 둘째자리까지 출력 (셋째에서 반올림)

	//%g : 실수 출력 (지수 형태로도 출력)
	printf("%g\n", 3.141592);
	printf("%.3g\n", 8723545676.564568);

	//%c : 문자 출력 ('알파벳, 숫자, 몇몇 기호, \n') - 한글, 한자, 유니코드 X
	printf("%c %c %c\n", 'a', 'b', 'c');

	//%s : 문자열 출력 - 한글 O
	printf("%s\n", "안녕하세요");
}

