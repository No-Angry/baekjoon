#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>

int gcd(int a, int b) {
	// 유클리드 알고리즘 : 큰 값(a)에 작은 값(b)을 나눈 나머지를 구하고, 나누었던 값(b)을 구했던 나머지로 다시 나머지연산해서 나머지가 0이 될 때까지 계산함.
	if (b == 0) {
		return 1;
	}
	while (b != 0) {
		int temp = b;
		b = a % b;
		a = temp;
	}
	return a;
}

int main(void) {
	int input;
	scanf("%d", &input);
	int arr[100000] = { 0 };
	//int* arr = (int*)malloc(sizeof(int) * input);
	for (int i = 0; i < input; i++) {
		scanf("%d", &arr[i]);
	}
	//int* diff = (int*)malloc(sizeof(int) * (input - 1));
	int diff[100000] = { 0 };
	for (int i = 0; i < input - 1; i++) {
		diff[i] = arr[i + 1] - arr[i];
	}

	int res_gcd = diff[0];
	for (int i = 1; i < input - 1; i++) {
		res_gcd = gcd(diff[i], res_gcd);
	}

	printf("%d", ((arr[input - 1] - arr[0]) / res_gcd) - input + 1);// (끝 값 - 시작 값) / 최대공약수 - 기존 가로수의 수 + 1? 18 - 2 / 2 - 4

	return 0;
}