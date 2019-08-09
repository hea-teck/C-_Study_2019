#include "stdafx.h"
#include "stdio.h"

struct ProductInfo {
	int num;
	char name[100];
	int cost;
};

void productSwap(ProductInfo *a, ProductInfo *b) {
	ProductInfo tmp = *a;
	*a = *b;
	*b = tmp;
}

int main() {
	ProductInfo myProduct{ 4797283, "���� �Ѷ��", 20000 };
	ProductInfo otherProduct{ 1234567, "���� ������", 10000 };

	productSwap(&myProduct, &otherProduct);

	printf("��ǰ ��ȣ : %d\n", myProduct.num);
	printf("��ǰ �̸� : %s\n", myProduct.name);
	printf("��       �� : %d\n", myProduct.cost);
}