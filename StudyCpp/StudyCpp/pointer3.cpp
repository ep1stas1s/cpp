#include <stdio.h>

int main() {
	int a = 10;

	int *ptr;
	ptr = &a;

	printf("a�� �� : %d\n", a);

	*ptr = 20;	// ptr�� ����Ű�� a�� ������ 20���� �ٲ�

	printf("a�� �� : %d\n", a);
}