#include <stdio.h>

int main() {
	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };

	printf("arr�� �� : %d\n", arr);		// arr = &arr[0] (��, arr[0]�� �ּҰ����� arr�迭 �ּ��� ���۰�)
	for (int i = 0; i < 10; i++) {
		printf("&arr[%d] = %d\n", i, &arr[i]);	// �Ʒ��� ����
		printf("arr + %d = %d\n", i, arr + i);
	}
}