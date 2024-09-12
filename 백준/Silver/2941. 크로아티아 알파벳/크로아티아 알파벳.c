#include <stdio.h>

int main(void) {
	char word[100] = { 0 };
	int cnt = 0;
	scanf("%s", word);

	for (int i = 0; word[i] != 0; i++) {
		if (word[i] == 'c') { // c를 받았을 때
			if (word[i + 1] == '=' || word[i + 1] == '-') {
				i++;
			}
		}
		if (word[i] == 'd') { // d를 받았을 때
			if (word[i + 1] == '-') {
				i++;
			}
			else if (word[i + 1] == 'z' && word[i + 2] == '=') {
				i += 2;
			}
		}
		if (word[i] == 'l' || word[i] == 'n') {
			if (word[i + 1] == 'j') {
				i++;
			}
		}
		if (word[i] == 's' || word[i] == 'z') {
			if (word[i + 1] == '=') {
				i++;
			}
		}
		cnt++;
	}
	printf("%d", cnt);
	return 0;
}