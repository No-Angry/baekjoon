#include <stdio.h>

int main(void) {
	int forward, back, tree;
	scanf("%d %d %d", &forward, &back, &tree);
	//while (1) { // tree를 최댓값으로 하면 시간 초과됨.
	//	temp += forward;
	//	day++;
	//	if (temp >= tree) break;
	//	temp -= back;
	//}

	//f - b = 1 이면 day = tree - b
	/*if (tree % (forward - back) != 0) {
		printf("%d", tree / (forward - back) + 1);
	}
	else {
		printf("%d", tree / (forward - back) - back);
	}//내가 제출한 답. 정상에 도착하면 미끄러지지 않는다는 부분을 잘못 이해해 오랜 시간이 걸림 */
	if ((tree - back) % (forward - back) != 0) {
		printf("%d", (tree - back) / (forward - back) + 1);
	}
	else {
		printf("%d", (tree - back) / (forward - back));
	}
	return 0;
}