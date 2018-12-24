#include <stdio.h>

int main() {
	int arr[10][10];
	int row;
	int col;
	int sum;

	scanf("%d", &row);
	scanf("%d", &col);

	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {
			scanf("%d", &arr[i][j]);
		}
	}
	
	for (int i = 0; i < row; i++) {
	sum = 0;
		for (int j = 0; j < col; j++) {
			sum += arr[i][j];
		}
 		printf("%d\n", sum);
	}
}