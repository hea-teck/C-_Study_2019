// ü��(kg, �Ǽ�)�� Ű(m, �Ǽ�)�� �Է¹޾Ƽ� ü���� ������ ���ϴ� ���α׷��� ����� ������.

#include "stdafx.h"

#include <stdio.h>

int main() {

	float w, t;

	printf("ü��(kg)�� Ű(m)�� �Է��ϼ���.\n");
	scanf("%f%f", &w, &t);

	float bmi = w / (t * t);

	printf("ü���� ������ %f�Դϴ�.\n", bmi);

}