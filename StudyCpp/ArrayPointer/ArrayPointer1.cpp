#include <stdio.h>

int main() {
	int a = 10;
	int *ptr_a = &a;

	printf("ptr_a�� �� : %d\n", ptr_a);
	printf("ptr+a + 1�� �� : %d\n", ptr_a + 1);

	// 4byte�� int a �����̹Ƿ�, �ش� ������ �ڷ�����ŭ�� ������ŭ�� �ǳʶپ� ǥ��.
}