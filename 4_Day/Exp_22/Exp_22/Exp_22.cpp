// Exp_22.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.

// 2차원 배열

#include "stdafx.h"

#include <stdio.h>

int main()
{
	int arr[3][4] = {
			{1,2,3,4},
			{5,6,7,8}, // ex. '7'은 1행 3열이다. (2행 아님!)  
			{9,10,11,12}
	};

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 4; j++) {
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
}

