// �迭 ������ : �迭�� ����Ű�� ������
// ������ �迭 : �����͵��� �迭

#include <stdio.h>

int main() {
	int a = 10;
	int b = 20;
	int c = 30;
	int d = 40;
	
	int(*ptrr)[4];	// 4��¥�� int�� �迭�� ����Ű�� ������
	int *ptr[4];	// 4���� �����Ͱ� ����ִ� �迭

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