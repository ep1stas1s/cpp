#include <stdio.h>

struct ProductInfo {
	int num;			// 4B
	char name[100];		// 100B
	int cost;			// 4B
};

int main() {
	ProductInfo myProduct = {479124, "���� �Ѷ��", 19900};

	printf("��ǰ ��ȣ : %d\n", myProduct.num);
	printf("��ǰ �̸� : %s\n", myProduct.name);
	printf("��     �� : %d��\n", myProduct.cost);

	printf("sizeof(myProduct) = %d\n\n", sizeof(myProduct));
	printf("��ǰ ��ȣ : %d\n", &myProduct.num);
	printf("��ǰ �̸� : %d\n", myProduct.name);
	printf("��     �� : %d\n", &myProduct.cost);

	printf("=============================================\n");

	ProductInfo *ptr_product = &myProduct;
	printf("��ǰ ��ȣ : %d\n", (*ptr_product).num);
	printf("��ǰ �̸� : %s\n", (*ptr_product).name);
	printf("��     �� : %d��\n", ptr_product->cost);
}