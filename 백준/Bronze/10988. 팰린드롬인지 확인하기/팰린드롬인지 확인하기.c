#include <stdio.h>

int main(void) {
	int same = 0;
	char input[100] = { 0 };
	scanf("%s", input);

	for (int i = 0; input[i] != 0; i++) {
		int cnt = 0;
		for (int j = 1; input[j] != 0; j++) {
			cnt++;
		}
		if (input[i] == input[cnt-i]) {
			same++;
		}
		else {
			same = 0;
			break;
		}
	}
	if (same > 0) {
		same = 1;
	}
	printf("%d", same);
	return 0;
}