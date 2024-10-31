#include<stdio.h>
#include<stdlib.h>

int main(void) {
	int reps, eq = 0;
	scanf("%d", &reps);
	for (int i = 0; i < reps; i++) {
		int a, b;
		scanf("%d %d", &a, &b);
		if (a > b) {
			int temp = a;
			a = b;
			b = temp;
		}
		for (int i = 1; i <= a; i++) {
			if (a % i == 0 && b % i == 0) {
				eq = i;
			}
		}
		printf("%d\n", a * b / eq);
	}
	return 0;
}