#include <stdio.h>

int main(void) {
	int reps, point = 1;
	scanf("%d", &reps);
	for (int i = 0; i < reps; i++) {
		point *= 2;
	}
	point += 1;
	printf("%d", point * point);
	
	return 0;
}