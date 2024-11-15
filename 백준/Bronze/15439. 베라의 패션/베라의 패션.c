#include<stdio.h>
#include<stdlib.h>

int main(void) {
	int input;
	scanf("%d", &input);

	printf("%d", input * (input - 1));
	return 0;
}