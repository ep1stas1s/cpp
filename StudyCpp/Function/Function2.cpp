#include <stdio.h>

// call by reference
void printArr(int *arr) { // = void printArr(int arr[4]) °ú µ¿ÀÏ
	for (int i = 0; i < 4; i++) {
		printf("%d ", arr[i]);
	}
}

// call by reference
void printArr2(int (*arr)[3]) { // int (*arr)[3]
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 3; j++) {
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
}


int main() {
	int arr[4] = { 1, 2, 3, 4 };

	printArr(arr);

	int arr2[2][3] = { {1, 2, 3}, { 4, 5, 6} };
	printArr2(arr2);

}