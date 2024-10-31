#include<stdio.h>
#include<stdlib.h>

int main(void) {
	long long int a, b, eq = 0;
	scanf("%lld %lld", &a, &b);
	if (a > b) {
		long long int temp = a;
		a = b;
		b = temp;
	}
	for (int i = 1; i <= a; i++) {
		if (a % i == 0 && b % i == 0) {
			eq = i;
		}
	}
	printf("%lld\n", a * b / eq);

	return 0;
}