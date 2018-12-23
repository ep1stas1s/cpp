#include <stdio.h>

int main() {
	int a = 10;

	int *ptr;
	ptr = &a;

	int **ptr_ptr;	// ptr을 가리키는 ptr
	ptr_ptr = &ptr;

	printf("a = %d\n", a);		// 10														a
	printf("&a = %d\n", &a);	// a의 주소값									b

	printf("ptr = %d\n", ptr);	// a의 주소값									b
	printf("&ptr = %d\n", &ptr);// ptr의 주소값								c

	printf("ptr_ptr = %d\n", ptr_ptr);		// (a의 주소값인)ptr의 주소값		c
	printf("*ptr_ptr = %d\n", *ptr_ptr);	// (ptr_ptr이 가리키는)ptr의 값		b
	printf("**ptr_ptr = %d\n", *(*ptr_ptr));// ((ptr_ptr이 가리키는 ptr)이 가리키는)a의 값		a
	// a = **ptr_ptr
	// &a = ptr = *ptr_ptr
	// &ptr = ptr_ptr
}