#include <stdio.h>

int main() {
	int a = 10;
	int *ptr_a = &a;

	printf("ptr_a의 값 : %d\n", ptr_a);
	printf("ptr+a + 1의 값 : %d\n", ptr_a + 1);

	// 4byte인 int a 공간이므로, 해당 변수의 자료형만큼의 공간만큼을 건너뛰어 표시.
}