#include "stdafx.h"
#include "stdio.h"

// sscanf / sprintf : ���ڿ��κ��� �Է°� ����� �޴´�.

int main() {
	/*char str[] = "450"; // ���ڿ��� �� 450�� ������ ����
	int n;

	sscanf(str, "%d", &n); // 450 ���ڿ��κ��� �Է��� �޾Ƽ� �� ���� n�� �����Ѵ�.
	printf("n�� �� : %d\n", n);*/ // ������ n�� 450�� �������Ƿ�, ����ϸ� 450�� ��µȴ�.

	int n = 450;
	char str[100]; // str�� ����� �ϱ� ���ؼ�. 100���� ũ�� ����.

	sprintf(str, "%d", n); // 450�� %d �������� str�� ����ȴ�.
	printf("%s\n", str);

}