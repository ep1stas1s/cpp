// 배열 포인터 : 배열을 가리키는 포인터
// 포인터 배열 : 포인터들의 배열

#include <stdio.h>

int main() {
	int a = 10;
	int b = 20;
	int c = 30;
	int d = 40;
	
	int(*ptrr)[4];	// 4개짜리 int형 배열을 가리키는 포인터
	int *ptr[4];	// 4개의 포인터가 들어있는 배열

	ptr[0] = &a;
	ptr[1] = &c;
	ptr[2] = &d;
	ptr[3] = &b;

	for (int i = 0; i < 4; i++) {
		printf("%d ", *ptr[i]);
	}


	int arr[4] = { 1, 2, 3, 4 };
	int *ptr[4];

	for (int i = 0; i < 4; i++) {
		ptr[i] = &arr[i];
		printf("%d ", *ptr[i]);
	}

}