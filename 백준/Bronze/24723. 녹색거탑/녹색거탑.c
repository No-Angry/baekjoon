#include<stdio.h>
#include<stdlib.h>

int main(void) {
	int input, sum = 1;
	scanf("%d", &input);
	for (int i = 1; i <= input; i++) {
		sum *= 2;
	}
	printf("%d", sum);
	return 0;
}