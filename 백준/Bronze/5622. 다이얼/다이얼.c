#include <stdio.h>
#include <stdlib.h>

int main(void) {
	char text[15] = { 0 };
	int cnt = 0;
	scanf("%s", text); // A의 아스키코드 - 65

	for (int i = 0; text[i] != 0; i++) {
		if (text[i] % 65 < 3) {
			cnt += 2;
		}
		else if (text[i] % 65 < 6) {
			cnt += 3;
		}
		else if (text[i] % 65 < 9) {
			cnt += 4;
		}
		else if (text[i] % 65 < 12) {
			cnt += 5;
		}
		else if (text[i] % 65 < 15) {
			cnt += 6;
		}
		else if (text[i] % 65 < 19) {
			cnt += 7;
		}
		else if (text[i] % 65 < 22) {
			cnt += 8;
		}
		else if (text[i] % 65 < 26) {
			cnt += 9;
		}
		cnt++;
	}
	printf("%d", cnt);
	return 0;
}