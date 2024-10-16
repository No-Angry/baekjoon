#include <stdio.h>

int main(void){
	int arr[1000] = { 0 };
	int input, temp;
	scanf("%d", &input);

	for (int i = 0; i < input; i++) {
		scanf("%d", &arr[i]);
	}
	for (int i = 0; i < input; i++) {
		for (int j = i + 1; j < input; j++) {
			if (arr[i] > arr[j]) {
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
	for (int i = 0; i < input; i++) {
		printf("%d\n", arr[i]);
	}
}