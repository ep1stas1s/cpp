// call by value
// call by reference

#include <stdio.h>

void swap1(int x, int y) {
	int temp = x;
	x = y;
	y = temp;
}

void swap2(int *x, int *y) {
	int temp = *x;
	*x = *y;
	*y = temp;
}

void swap3(int &x, int &y) {
	int temp = x;
	x = y;
	y = temp;
}

int main()
{
	int a = 2, b = 3;
	

	swap1(a, b);	// call by value -> a b가 각각 x y로 이동하고, x y가 서로 바뀌긴하지만 a b가 직접 바뀌진 않음
					// 즉, 값만 전달이 됨.

	printf("a = %d, b = %d\n\n", a, b);

	swap2(&a, &b);	// call by reference -> a b의 주소값이 각각 x, y이 전달되기 때문에 사실상 a의 주소값, x의 주소값은 서로 같은 곳을 가리킴
					// 즉, 주소값이 전달되어 실질적으로 a와 b가 swap됨

	printf("a = %d, b = %d\n\n", a, b);

	a = 2, b = 3;	// 다시 초기화

	swap3(a, b);	// C++에서만 가능한 문법의 함수

	printf("a = %d, b = %d", a, b);

}
