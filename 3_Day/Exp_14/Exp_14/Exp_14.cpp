#include "stdafx.h"

#include <stdio.h>

int main() {

	int choice;

makeChoice:

	printf("새 게임 : 1\n");
	printf("불러오기 : 2\n");
	printf("설정 : 3\n");
	printf("크레딧 : 4\n");

	scanf("%d", &choice);

	switch (choice) {
	case 1:
		printf("새 게임입니다.");
		break;

	case 2:
		printf("불러오기입니다.");
		break;

	case 3:
		printf("설정입니다.");
		break;

	case 4:
		printf("크레딧입니다.");
		break;

	default:
		printf("잘못입력하였습니다.\n");
		goto makeChoice;
		break;
	}

	/*
	if (choice == 1) {
	printf("새 게임입니다.");
	}
	else if (choice == 2) {
	printf("불러오기입니다.");
	}
	else if (choice == 3) {
	printf("설정입니다.");
	}
	else if (choice == 4) {
	printf("크레딧입니다.");
	}
	else
	printf("잘못입력하였습니다.");
	*/
}
