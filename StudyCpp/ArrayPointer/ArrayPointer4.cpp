/*
	1. ptr == &ptr[0]
	2. *ptr == ptr[0]
	3. ptr + 1 == ptr에 sizeof(*ptr)을 더한 값 (자료형의 크기를 더한 값)

*/

#include <stdio.h>

int main() {
	int arr[3] = { 1, 2, 3 };

	printf("arr = %d\n", arr);			// arr[0] 주소값
	printf("arr + 1 = %d\n", arr + 1);	// arr[1] 주소값

	printf("&arr = %d \n", &arr);		// arr[0] 주소값
	printf("&arr + 1 = %d\n", &arr + 1);// 위 3번에 적용하면
										// &arr + 1 == &arr에 sizeof(arr)를 더한 값
}