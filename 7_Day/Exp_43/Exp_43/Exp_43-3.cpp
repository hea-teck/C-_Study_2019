#include "stdafx.h"
#include "stdio.h"

struct Point {
	int x, y;

	void pSwap() {
		// x��ǥ�� y��ǥ�� ��ȯ
		int tmp = x;
		x = y;
		y = tmp;
	}
};

int main() {
	Point pos = { 3,4 };
	pos.pSwap();
	printf("(%d, %d)\n", pos.x, pos.y);
}