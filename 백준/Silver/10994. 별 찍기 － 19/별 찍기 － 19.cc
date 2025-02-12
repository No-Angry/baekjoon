#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <set>
using namespace std;

int recursive(int rx, int ry, int cnt) {
	if ((ry - 1) / 4 + 1 == cnt) return ry;
	return recursive(rx + 4, ry + 4, cnt);
}

int main(void) {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	int input;
	cin >> input;
	int x = recursive(-1, 1, input), y = input * 4 - 3;
	for (int i = 0; i < y; i++) {
		if (i == 0) { // i가 0일 때 조건에 나누기가 있어 오류가 생김. 따로 처리해줌,
			for (int j = 0; j < x; j++) {
				cout << '*';
			}
		}
		else if (y / i >= 2) {// 조건, 1 ~ 반
			for (int j = 0; j < x; j++) {
				if (i % 2 == 1) {
					if (j > i - 1 && j < y - i) {
						cout << ' ';
					}
					else if (j % 2 == 0) cout << '*';
					else cout << ' ';
				}
				else { // 짝수번째 줄은 범위 안은 모두 * 그 외에는 칸 사이에 공백
					if (j > i - 1 && j < y - i) {
						cout << '*';
					}
					else if (j % 2 == 0) cout << '*';
					else cout << ' ';
				}
			}
		}
		else {
			for (int j = 0; j < x; j++) {
				if (j < i && j >= y - i) { // (칸 사이에 각각 공백을 두는 부분)
					if (i % 2 == 0 && j % 2 == 0) { // i, j 모두 짝수일 때
						cout << '*';
					}
					else if (i % 2 == 1) cout << ' '; // i가 홀수일 때
					else cout << '*'; // 둘 다 홀수일 때
				}
				else { // 1,2,7,8,9,10
					if (j % 2 == 0) cout << '*';
					else cout << ' ';
				}
			}
		}
		cout << '\n';
	}
	return 0;
}