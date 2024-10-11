#include<stdio.h>

int main(void) {
	int input, result = 0;
	scanf("%d", &input);

	for (int i = 0; i < input; i++) {
		int j = i, sum = 0;
		while (j > 10) {
			sum = sum + j % 10;
			j /= 10;
		}
		sum = sum + i + j; //자기 자신(i) + 각 자릿수의 합(sum + j)
		if (sum == input) {
			result = i;
			break;
		}
	}
	printf("%d", result);
	return 0;
}