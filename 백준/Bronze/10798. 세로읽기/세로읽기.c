#include <stdio.h>

int main(void) {
	char arr[5][16] = { 0 };
	int count[5] = { 0 };
	int max = 0;
	for (int i = 0; i < 5; i++) {
		int cnt = 0;
		scanf("%s", arr[i]);
		for (int j = 0; arr[i][j] != 0; j++) {
			cnt++;
			if (max < cnt) {
				max = cnt;
			}
		}
		count[i] = cnt;
	}
	for (int i = 0; i < max; i++) {
		for (int j = 0; j < 5; j++) {
			if (arr[j][i] == 0) {
				continue;
			}
			else printf("%c", arr[j][i]);
		}
	}
	return 0;
}