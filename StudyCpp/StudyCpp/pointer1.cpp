#include <stdio.h>

int main() {
	int a = 20;

	int *ptr_a;
	ptr_a = &a;	// &a = a�� �ּҰ�

	printf("a�� �� : %d\n", a); 
	printf("a�� �ּҰ� : %d\n", ptr_a);
	printf("ptr_a�� ����� �� : %d\n", ptr_a);
	printf("ptr_a�� ����Ű�� �� : %d\n", *ptr_a);
}