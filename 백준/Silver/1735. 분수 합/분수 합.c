#include<stdio.h>
#include<stdlib.h>

int main(void) {
	int son[2] = { 0 };
	int mom[2] = { 0 };
	int maxeq = 1; // 최대공약수
	
	for (int i = 0; i < 2; i++) {
		scanf("%d %d", &son[i], &mom[i]);
	}

	//분모가 작은 쪽을 0번째에 두기 - 최대공약수를 찾을 때 필요한 과정
	if (mom[0] > mom[1]) {
		int temp = mom[1];
		mom[1] = mom[0];
		mom[0] = temp;
		temp = son[1];
		son[1] = son[0];
		son[0] = temp;
	}
	// 최대공약수 찾기
	for (int i = 1; i < mom[0]; i++) {
		if (mom[0] % i == 0 && mom[1] % i == 0) {
			maxeq = i;
		}
	}
	int mineq = mom[0] * mom[1] / maxeq; //최소공배수, 통분했을 때의 분모
	
	int rson = 0; // 분자의 합
	int check = 0;

	for (int i = 0; i < 2; i++) { // 2 7 \n 3 5 
		rson += mineq / mom[i] * son[i]; // 통분했을 때 분모에 곱해진 수만큼 분자에 곱한 후 결과값에 누적
	}
	for (int i = 1; i <= mineq; i++) { // 계산한 후 기약분수로 만들기 위해 분자와 분모의 최대공약수를 구함.
		if (mineq % i == 0 && rson % i == 0) {// 공약수가 하나라도 있으면 
			check = 1;
			maxeq = i;
		}
	}
	if (check == 1) { // 분자와 분모에 최대공약수만큼 나눠줌.
		mineq /= maxeq;
		rson /= maxeq;
	}
	printf("%d %d", rson, mineq);

	return 0;
}