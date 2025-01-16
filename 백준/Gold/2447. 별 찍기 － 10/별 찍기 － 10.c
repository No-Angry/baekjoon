#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
#include<string.h>

int recursion(int x, int y) {
	if ((x - 1) % 3 == 0 && (y - 1) % 3 == 0) return 1; // 4나 7이 나와도 이 조건에 만족해야함.
	else if (x < 1) return 0;
	recursion(x / 3, y / 3);

}

//int star(int out, int in, int m, int n) {
//	if (m >= out) return 0;
//	if (n >= in) star(out, in, m++, 0);
//	else if (recursion(n, m)) printf(" ");
//	else printf("*");
//	star(out, in, m, n++);
//}

int main(void) {
	int input;
	scanf("%d", &input);
	//star(input, input, 0, 0);
	for (int i = 0; i < input; i++) {
		for (int j = 0; j < input; j++) {
			if (recursion(i, j)) printf(" ");
			else printf("*");
		}
		printf("\n");
	}
	return 0;
}