#include <stdio.h>

struct ProductInfo {
	int num;			// 4B
	char name[100];		// 100B
	int cost;			// 4B
};

void productSale(ProductInfo *p, int percent) {
	p->cost -= p->cost * percent / 100;		// p->cost : p(ProductInfo)의 cost 값
}

void productSwap(ProductInfo *a, ProductInfo *b) {
	ProductInfo tmp = *a;
	*a = *b;
	*b = tmp;
}

int main() {
	ProductInfo myProduct{ 479124, "제주 한라봉", 20000 };
	ProductInfo otherProduct{ 479125, "성주 꿀참외", 10000 };

	productSale(&myProduct, 10);


	printf("상품 번호 : %d\n", myProduct.num);
	printf("상품 이름 : %s\n", myProduct.name);
	printf("가     격 : %d원\n", myProduct.cost);
	printf("\n");

	// swap
	productSwap(&myProduct, &otherProduct);

	printf("상품 번호 : %d\n", myProduct.num);
	printf("상품 이름 : %s\n", myProduct.name);
	printf("가     격 : %d원\n", myProduct.cost);

}