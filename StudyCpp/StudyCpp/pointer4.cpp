#include <stdio.h>

int main() {
	int a = 10;

	int *ptr;
	ptr = &a;

	int **ptr_ptr;	// ptr�� ����Ű�� ptr
	ptr_ptr = &ptr;

	printf("a = %d\n", a);		// 10														a
	printf("&a = %d\n", &a);	// a�� �ּҰ�									b

	printf("ptr = %d\n", ptr);	// a�� �ּҰ�									b
	printf("&ptr = %d\n", &ptr);// ptr�� �ּҰ�								c

	printf("ptr_ptr = %d\n", ptr_ptr);		// (a�� �ּҰ���)ptr�� �ּҰ�		c
	printf("*ptr_ptr = %d\n", *ptr_ptr);	// (ptr_ptr�� ����Ű��)ptr�� ��		b
	printf("**ptr_ptr = %d\n", *(*ptr_ptr));// ((ptr_ptr�� ����Ű�� ptr)�� ����Ű��)a�� ��		a
	// a = **ptr_ptr
	// &a = ptr = *ptr_ptr
	// &ptr = ptr_ptr
}