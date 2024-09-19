#include <stdio.h>
#include <math.h>

int main(void) {
	char arr[36] = { 0 };
	int bin, a = 0, result = 0;

	scanf("%s %d", arr, &bin); // A 65
	for (int i = 0; arr[i] != 0; i++) {
		a++;
	}
	for (int i = 0; arr[i] != 0; i++) {
		if (arr[i] >= 'A') {
			arr[i] -= 'A' - 10; // A ~ Z는 10 ~ 35로 변환
			result += arr[i] * pow(bin, a - 1 - i); // arr[i] = 35 // bin = 36 * 4
		}
		else {
			arr[i] -= '0';
			result += arr[i] * pow(bin, a - 1 - i);
		}
	}
	printf("%d", result);
	return 0;
}