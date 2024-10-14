#include<stdio.h>
#include<stdlib.h>

int main(void) {
	char chess[50][51] = { 0 };
	int x, y, min = 2500;
	scanf("%d %d", &y, &x);
	for (int i = 0; i < y; i++) {
		scanf("%s", chess[i]);
	}
	for (int i = 0; i + 7 < y; i++) {
		for (int j = 0; j + 7 < x; j++) {
			int count = 0;
			char check = 'W';
			//if (chess[i][j] == 'W') check = 'B';//체스판 첫 시작이 흰색이면 check를 검정색부터 시작한다.
			for (int k = 0; k < 8; k++) {
				for (int l = 0; l < 8; l++) {
					if (chess[i + k][j + l] == check) {//현재 체스판 시작 위치 + 반복횟수와 check를 비교, 
						count++;
					}
					if (check == 'W') check = 'B';
					else check = 'W';
				}
				if (check == 'W') check = 'B';
				else check = 'W';
			}
			if (min > count) min = count;
			count = 0;
			check = 'B';
			for (int k = 0; k < 8; k++) {
				for (int l = 0; l < 8; l++) {
					if (chess[i + k][j + l] == check) {//현재 체스판 시작 위치 + 반복횟수와 check를 비교, 
						count++;
					}
					if (check == 'W') check = 'B';
					else check = 'W';
				}
				if (check == 'W') check = 'B';
				else check = 'W';
			}
			if (min > count) min = count;
		}
	}
	printf("%d", min);
	return 0;
}