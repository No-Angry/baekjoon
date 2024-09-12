#include <stdio.h>

int main(void) {
	double total_score = 0, total_obj = 0;//t_s - 학점의 총합, t_o - 전체과목 평점
	for (int i = 0; i < 20; i++) {
		double score, obj;
		char object[3] = { 0 }; //obj - 평점, score - 학점
		char word[50] = { 0 };
		scanf("%s %lf %s", word, &score, &object);

		if (object[0] == 'P') {
			continue;
		}
		else total_score += score;//최종 학점에 추가

		if (object[0] == 'A') {
			if (object[1] == '+') {
				obj = 4.5;
			}
			else obj = 4.0;
		}
		else if (object[0] == 'B') {
			if (object[1] == '+') {
				obj = 3.5;
			}
			else obj = 3.0;
		}
		else if (object[0] == 'C') {
			if (object[1] == '+') {
				obj = 2.5;
			}
			else obj = 2.0;
		}
		else if (object[0] == 'D') {
			if (object[1] == '+') {
				obj = 1.5;
			}
			else obj = 1.0;
		}
		else {
			obj = 0.0;
		}
		
		total_obj += obj * score;

	}
	printf("%lf", total_obj / total_score);
	return 0;
}