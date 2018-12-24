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
	printf("%d\n", 100 / SQUARE(a));	// a가 5일 때 4가 출력되야 하지만 100 으로 출력됨 
										// -> define 할 때 괄호를 쳐줌으로 써 방지

	printf("%d\n", SQUARE(a - 1));		// SQUARE( a - 1 * a - 1) 로 인식함 -> 매개변수마다 괄호를 해줌

	int x = 5, y = 10;
	printf("%d\n", MAX(x, y));
}