#include <stdio.h>

int main(void){
	int arr[5] = { 0 };
	int temp, avg = 0;

	for (int i = 0; i < 5; i++) {
		scanf("%d", &arr[i]);
		avg += arr[i];
	}
	for (int i = 0; i < 5; i++) {
		for (int j = i + 1; j < 5; j++) {
			if (arr[i] > arr[j]) {
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
	printf("%d\n%d", avg / 5, arr[2]);
}