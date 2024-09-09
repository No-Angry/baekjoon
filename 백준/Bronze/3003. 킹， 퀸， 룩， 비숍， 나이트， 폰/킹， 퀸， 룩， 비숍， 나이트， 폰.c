#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int chess[6] = { 1,1,2,2,2,8 };
	int input[6] = { 0 };
	for (int i = 0; i < 6; i++) {
		scanf("%d", &input[i]);
		if (input[i] != chess[i]) {
			chess[i] = chess[i] - input[i];
		}
		else {
			chess[i] = 0;
		}
		printf("%d ", chess[i]);
	}
	return 0;
}