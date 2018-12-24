#include <stdio.h>

struct ProductInfo {
	int num;			// 4B
	char name[100];		// 100B
	int cost;			// 4B
};

void productSale(ProductInfo *p, int percent) {
	p->cost -= p->cost * percent / 100;		// p->cost : p(ProductInfo)�� cost ��
}

void productSwap(ProductInfo *a, ProductInfo *b) {
	ProductInfo tmp = *a;
	*a = *b;
	*b = tmp;
}

int main() {
	ProductInfo myProduct{ 479124, "���� �Ѷ��", 20000 };
	ProductInfo otherProduct{ 479125, "���� ������", 10000 };

	productSale(&myProduct, 10);


	printf("��ǰ ��ȣ : %d\n", myProduct.num);
	printf("��ǰ �̸� : %s\n", myProduct.name);
	printf("��     �� : %d��\n", myProduct.cost);
	printf("\n");

	// swap
	productSwap(&myProduct, &otherProduct);

	printf("��ǰ ��ȣ : %d\n", myProduct.num);
	printf("��ǰ �̸� : %s\n", myProduct.name);
	printf("��     �� : %d��\n", myProduct.cost);

}