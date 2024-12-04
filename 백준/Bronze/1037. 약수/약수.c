#include<stdio.h>
#include<stdlib.h>

int main(void) {
	int a = 0;
	long long int max = 0, min = 1000000;
	int arr[50] = { 0 };
	scanf("%d", &a);
	for (int i = 0; i < a; i++) {
		scanf("%d", &arr[i]);
		if (arr[i] > max) max = arr[i];
		if (arr[i] < min) min = arr[i];
	}
	printf("%lld", max * min);
	return 0;
}