#include <stdio.h>

int main() {
	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8 ,9 ,10 };
	int *ptr = arr;

	for (int i = 0; i < 10; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");

	for (int i = 0; i < 10; i++) {
		printf("%d ", *(arr + i));
	}
	printf("\n");

	for (int *ptr = arr; ptr < arr + 10; ptr++) {
		printf("%d ", *ptr);
	}
	printf("\n");

	// arr[i] == *(arr + i) == *(ptr + i) == *(i + ptr) == i[ptr]
	// a[b] -> *(a + b)

	for (int i = 0; i < 10; i++) {
		printf("%d ", i[ptr]);		// 가능하지만 직관적이지 못함 (실무에서 쓰면 안됨)
	}
	printf("\n");
}