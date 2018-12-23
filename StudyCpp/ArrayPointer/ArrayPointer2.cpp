#include <stdio.h>

int main() {
	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };

	printf("arr의 값 : %d\n", arr);		// arr = &arr[0] (즉, arr[0]의 주소값이자 arr배열 주소의 시작값)
	for (int i = 0; i < 10; i++) {
		printf("&arr[%d] = %d\n", i, &arr[i]);	// 아래와 같음
		printf("arr + %d = %d\n", i, arr + i);
	}
}