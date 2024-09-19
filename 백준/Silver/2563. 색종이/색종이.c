#include <stdio.h>

int main(void) {
	char arr[100][100] = { 0 };
	int paper, cnt = 0;
	scanf("%d", &paper);
	for (int i = 0; i < paper; i++) {
		int x, y;
		scanf("%d %d", &x, &y);
		for (int j = 0; j < 10; j++) {
			for (int k = 0; k < 10; k++) {
				arr[x + j][y + k]++;
				if (arr[x + j][y + k] != 1) {
					continue;
				}
				else cnt++;
			}
		}
	}
	printf("%d", cnt);
	return 0;
}