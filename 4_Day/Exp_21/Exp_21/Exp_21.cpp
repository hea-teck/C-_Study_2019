// Exp_21.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"

#include <stdio.h>

int main()
{
	int n;
	int arr[1000];

	printf("입력할 숫자의 개수 입력 : ");
	scanf("%d", &n);

	for (int i = 0; i < n; i++) {
		scanf("%d", &arr[i]);  // 배열에 입력을 받는 과정
	}

	for (int i = n - 1; i >= 0; i--) {
		printf("%d ", arr[i]);  // 배열 값을 거꾸로 출력하는 과정
	}
}

