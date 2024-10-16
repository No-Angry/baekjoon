#include <stdio.h>

int main(void){
	int sugar, big = 5, small = 3, count = 0;
	scanf("%d", &sugar);
	int temp = sugar;
	while (temp > 0) {
		temp -= big;
		count++;
		if (temp == 3) {
			printf("%d", count + 1);
			return 0;
		}
		else if (temp == 0) {
			printf("%d", count);
			return 0;
		}
	}
	if (temp < 0) {
		temp = sugar;
		count = 0;
	}
	while (temp > 0) {
		temp -= small;
		count++;
		if (temp % big == 0) {
			printf("%d", count + temp / big);
			return 0;
		}
		else if (temp == 0) {
			printf("%d", count);
			return 0;
		}
	}
	if (temp < 0) {
		printf("-1");
		return 0;
	}
}