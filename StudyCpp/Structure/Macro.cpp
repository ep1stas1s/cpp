#include <stdio.h>

#define PRINT_HELLO printf("Hello, World!");
// #define SQUARE(X) X * X
// #define SQUARE(X) (X * X)
#define SQUARE(X) ((X) * (X))
#define MAX(A,B) (((A) > (B)) ? (A) : (B))


int main() {
	PRINT_HELLO;
	printf("\n");

	int a = 4;

	printf("%d\n", SQUARE(a));
	printf("%d\n", 100 / SQUARE(a));	// a�� 5�� �� 4�� ��µǾ� ������ 100 ���� ��µ� 
										// -> define �� �� ��ȣ�� �������� �� ����

	printf("%d\n", SQUARE(a - 1));		// SQUARE( a - 1 * a - 1) �� �ν��� -> �Ű��������� ��ȣ�� ����

	int x = 5, y = 10;
	printf("%d\n", MAX(x, y));
}