#include <stdio.h>

int main(void) {

	int input, bin, len = 0;
	char result[100] = { 0 };
	scanf("%d %d", &input, &bin);
	int temp = input;
	for (int i = 0; temp > 0; i++) {// 자릿수 찾기
		len++;
		temp /= bin;
		//printf("%d\n", (int)pow(bin, i));
	}
	for (int i = len - 1; i >= 0; i--) { // 자릿수별 숫자 및 알파벳 지정 후 result에 입력
		int check = input % bin; // 해당 라인 적용 안 돼서 오류 발생
		input /= bin;
		if (check >= 10) {
			result[i] = check + ('A' - 10);
			//printf("%d입니다\n"), (int)pow(bin, i);
		}
		else {
			result[i] = check + '0';
		}
	}
	for (int i = 0; i < len; i++) {//입력한 result 배열을 순서대로 출력
		printf("%c", result[i]);
	}
	return 0;
}