#include <stdio.h>

int main(void) {
	int rows, cols;
	scanf("%d %d", &rows, &cols);
	int A[100][100];
	int B[100][100];
	

	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			scanf("%d", &A[i][j]);
		}
	}
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			scanf("%d", &B[i][j]);
		}
	}
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			int sum = A[i][j] + B[i][j];
			printf("%d ", sum);
		}
		printf("\n");
	}
	return 0;
}