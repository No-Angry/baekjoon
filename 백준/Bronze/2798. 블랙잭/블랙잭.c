#include<stdio.h>

int main(void) {
	int count, max = 0, result = 0;
	int card[101] = { 0 };
	scanf("%d %d", &count, &max);
	for (int i = 0; i < count; i++) scanf("%d", &card[i]);
	for (int i = 0; i < count - 2; i++) {
		for (int j = i + 1; j < count - 1; j++) {
			for (int k = j + 1; k < count; k++) {
				int card1 = card[i] + card[j] + card[k];
				if (card1 <= max && card1 > result) result = card1;
			}
		}
	}
	printf("%d", result);
	return 0;
}