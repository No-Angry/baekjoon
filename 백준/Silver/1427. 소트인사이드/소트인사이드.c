#include<stdio.h>
#include<stdlib.h>

int main(void) {
	int result[15] = {0}; // 버블정렬 활용한 정렬
	int input = 0, temp = 0, cnt = 0;
	scanf("%d", &input);
	for (int i = 0; input > 0; i++) {
		result[i] = input % 10;
		input /= 10;
		cnt++;
	}
	for (int i = 0; i < cnt; i++) {
		for (int j = i + 1; j < cnt + 1; j++) {
			if (result[i] < result[j]) {
				temp = result[i];
				result[i] = result[j];
				result[j] = temp;
			}
		}
	}
	for (int i = 0; i < cnt; i++) {
		printf("%d", result[i]);
	}
	return 0;
	//int result[20] = { 0 }; //버블정렬 활용하기 전 코드, 완성 실패
	//int input = 0, check = 0, cnt = 0, temp1 = 0, temp2 = 0,tog = 0;
	//scanf("%d", &input);
	//while (input > 0) {
	//	check = input % 10;
	//	cnt++;
	//	
	//	for (int i = 0; i < cnt; i++) {						 // 배열의 0번째부터 체크. 98765421
	//		temp1 = 0, temp2 = 0, tog = 0;
	//		if (result[i] < check) {						//check가 배열의 i번째보다 더 크면
	//			tog = 1;
	//			temp1 = result[i];							//temp1에 i번째 값을 담고
	//			result[i] = check;							//i번째에 check를 담는다. 
	//			for (int j = i; j < cnt; j += 2) {			//i+1번째가 0이 아니라면 반복
	//				temp2 = result[j+1];					//i+1번째 값을 temp2에 담고 
	//				result[j+1] = temp1;					//temp1 값을 i+1번째 값에 담는다.
	//				temp1 = result[j + 2];					//i+2번째 값을 temp1에 담고
	//				result[j + 2] = temp2;					//temp2 값을 i+2번째 값에 담는다.
	//				printf("%d %d\n", temp1, temp2);
	//			}
	//		}
	//		if (cnt - 1 == i && tog == 0) {
	//			result[cnt] = check;
	//			printf("check가 %d일 때 교환없음", check);
	//		}
	//	}
	//	input /= 10;
	//	printf("%d %d %d\n", input,result[cnt-1], result[cnt]);
	//}
	//for (int i = 0; i < 20; i++) {
	//	printf("%d", result[i]);
	//}
}