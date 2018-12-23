/*
	1. ptr == &ptr[0]
	2. *ptr == ptr[0]
	3. ptr + 1 == ptr�� sizeof(*ptr)�� ���� �� (�ڷ����� ũ�⸦ ���� ��)

*/

#include <stdio.h>

int main() {
	int arr[3] = { 1, 2, 3 };

	printf("arr = %d\n", arr);			// arr[0] �ּҰ�
	printf("arr + 1 = %d\n", arr + 1);	// arr[1] �ּҰ�

	printf("&arr = %d \n", &arr);		// arr[0] �ּҰ�
	printf("&arr + 1 = %d\n", &arr + 1);// �� 3���� �����ϸ�
										// &arr + 1 == &arr�� sizeof(arr)�� ���� ��
}