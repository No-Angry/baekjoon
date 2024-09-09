#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int a, a10, a100, b, b10, b100;
	scanf("%d %d", &a, &b);

	a100 = a / 100;
	a10 = a % 100 / 10;
	a = a % 10;

	b100 = b / 100;
	b10 = b % 100 / 10;
	b = b % 10;

	a = a * 100 + a10 * 10 + a100;
	b = b * 100 + b10 * 10 + b100;

	if (a > b) {
		printf("%d", a);
	}
	else
		printf("%d", b);
	return 0;
}