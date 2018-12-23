#include <stdio.h>

int main() {
	int a = 10;

	int *ptr;
	ptr = &a;

	printf("a의 값 : %d\n", a);

	*ptr = 20;	// ptr이 가리키는 a의 변수를 20으로 바꿈

	printf("a의 값 : %d\n", a);
}