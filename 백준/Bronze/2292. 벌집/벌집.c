#include <stdio.h>

int main(void) {
	int room, result = 1, cnt = 1;
	scanf("%d", &room);
	for (int i = 0; result + 6 * i < room; i++) { // 수정해야함
		result += 6 * i;
		cnt++;
	}
	printf("%d", cnt);
	return 0;
}