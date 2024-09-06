#include <stdio.h>
#include <stdlib.h>

int main(void) {
	char word[19] = { 0 };
	int repeat, time;

	scanf("%d", &time);

	for (int i = 0; i < time; i++) { // time만큼 반복
		char result[1000] = { 0 };
		scanf("%d %s", &repeat, word); // 단어와 각 단어의 반복횟수 설정
		for (int j = 0; word[j] != 0; j++) { // 단어의 끝까지 반복
			for (int k = 0; k < repeat; k++) { // 문자를 반복횟수만큼 반복
				result[repeat * j + k] = word[j];
			}
		}
		for (int j = 0; result[j] != 0; j++) {
			printf("%c", result[j]);
		}
		printf("\n");
	}
	return 0;
}