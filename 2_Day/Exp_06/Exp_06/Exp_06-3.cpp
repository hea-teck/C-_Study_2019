// ����ȯ : �ڷ����� �ٸ� �ڷ������� �ٲٴ� �۾�

#include "stdafx.h"

#include <stdio.h>

int main() {
	int math = 90, korean = 95, english = 96;
	int sum = math + korean + english;
	//double sum = math + korean + english;
	double avg = (double)sum / 3;

	printf("%f\n", avg);

}

// [ ���� < �Ǽ� ]

// ���� / ���� = ����
// �Ǽ� / ���� = �Ǽ�
// �Ǽ� / �Ǽ� = �Ǽ�

// ���� + ���� = ����
// ���� + �Ǽ� = �Ǽ�
// �Ǽ� + �Ǽ� = �Ǽ�