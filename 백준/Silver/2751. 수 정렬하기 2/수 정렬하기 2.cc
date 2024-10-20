#include<stdio.h>
#include<stdlib.h>

void merge(int arr[], int left, int mid, int right) {
	int i = 0, j = 0, k = left; // i가 작은 배열의 인덱스, j가 큰 배열의 인덱스, k가 실제 배열의 인덱스
	int n1, n2; //
	n1 = mid - left + 1; //작은 배열
	n2 = right - mid;// 큰 배열의 반복횟수 정의 - 배열의 크기에 따라 달라짐
	int* low = (int*)malloc(sizeof(int) * n1); //임시 사용 배열. 입력값이 동적 할당되어 임시 배열도 동적 할당.
	int* high = (int*)malloc(sizeof(int) * n2); // "

	for (int i = 0; i < n1; i++) {
		low[i] = arr[left + i]; // 입력받은 배열에서 0번째부터 차례로 넣어줌
	}
	for (int j = 0; j < n2; j++) {
		high[j] = arr[mid + 1 + j]; //입력받은 배열에서 mid + 1번째부터 차례로 넣어줌
	}



	while (i < n1 && j < n2) { // 어느 한 쪽이 정렬이 끝날 때까지
		if (low[i] >= high[j]) {//high가 더 작으면
			arr[k] = high[j];//high의 데이터를 arr의 k번째로 이동
			j++;//high쪽 인덱스를 +1
		}
		else {//low가 더 작으면
			arr[k] = low[i];
			i++;
		}
		k++;//반복문 1번 수행했을 때 k(left, 즉 배열의 인덱스)가 1씩 증가
	}
	//위의 반복문을 끝내면 임시 배열은 정렬이 끝난 상태지만 입력된 배열에 데이터가 덜 들어감. 다른 한 쪽의 배열을 arr에 차례로 입력
	while (i < n1) {  
		arr[k] = low[i];
		i++;
		k++;
	}
	while (j < n2) {
		arr[k] = high[j];
		j++;
		k++;
	}
}

void mergesort(int arr[], int left, int right) {
	if (left < right) { //재귀함수 종료 조건
		int mid = left + (right - left) / 2;// left~right
		mergesort(arr, left, mid); // 자기 자신을 호출. 종료 조건이 되면 배열의 0번째 데이터부터 정렬
		mergesort(arr, mid + 1, right);// 자기 자신을 호출. 종료 조건이 되면 배열의 mid + 1번째부터 정렬
		merge(arr, left, mid, right);//실질적으로 정렬하는 함수
	}
}



int main(void) {
	int input;
	scanf("%d", &input);
	int* arr = (int*)malloc(sizeof(int) * input);
	if (arr == NULL) {
		{
			printf("메모리 할당 실패\n");
			return 1;
		}
	}

	for (int i = 0; i < input; i++) {
		scanf("%d", &arr[i]);
	}

	mergesort(arr, 0, input-1); //0부터 배열의 끝을 함수에 매개변수로 넣어줌
	
	for (int i = 0; i < input; i++) {
		printf("%d\n", arr[i]);
	}
	return 0;
}