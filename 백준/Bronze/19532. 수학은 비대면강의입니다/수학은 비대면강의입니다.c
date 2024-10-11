#include<stdio.h>

int main(void) {
	int input[6] = { 0 }; 
	for (int i = 0; i < 6; i++) {
		scanf("%d", &input[i]);
	}
	int x, y; // 브루탈 포스 알고리즘 이용 방법. 모든 경우의 수 이용.
	for (int i = -999; i < 1000; i++) {
		for (int j = -999; j < 1000; j++) {
			if (input[0] * i + input[1] * j == input[2] && input[3] * i + input[4] * j == input[5]) {
				x = i;
				y = j;
				break;
			}
		}
	}
	printf("%d %d", x, y);
	/*int x, y; //연립방정식을 풀이하는 일반적인 과정(한 미지수의 계수를 맞춰 다른 하나의 미지수의 해를 찾아내는 방법)
	int temp = input[0];	
	for (int i = 0; i < 3; i++) { // 연립방정식에서 x를 지우기 위해 x의 계수를 맞추는 작업
		input[i] *= input[3];
		printf("%d\n", input[i]);
	}
	for (int i = 3; i < 6; i++) {
		input[i] *= temp;
		printf("%d\n", input[i]);
	}

	y = (input[2] - input[5]) / (input[1] - input[4]);
	x = (input[5] - (input[4] * y)) / input[3];

	printf("%d %d", x, y);*/
	return 0;
}