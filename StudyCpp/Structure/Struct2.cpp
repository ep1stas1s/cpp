#include <stdio.h>

struct ProductInfo {
	int num;			// 4B
	char name[100];		// 100B
	int cost;			// 4B
};

int main() {
	ProductInfo myProduct = {479124, "제주 한라봉", 19900};

	printf("상품 번호 : %d\n", myProduct.num);
	printf("상품 이름 : %s\n", myProduct.name);
	printf("가     격 : %d원\n", myProduct.cost);

	printf("sizeof(myProduct) = %d\n\n", sizeof(myProduct));
	printf("상품 번호 : %d\n", &myProduct.num);
	printf("상품 이름 : %d\n", myProduct.name);
	printf("가     격 : %d\n", &myProduct.cost);

	printf("=============================================\n");

	ProductInfo *ptr_product = &myProduct;
	printf("상품 번호 : %d\n", (*ptr_product).num);
	printf("상품 이름 : %s\n", (*ptr_product).name);
	printf("가     격 : %d원\n", ptr_product->cost);
}