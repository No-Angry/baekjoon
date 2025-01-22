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
	int x = recursive(-1, 1, input), y = x > 1 ? x + 2 : 1;
	for (int i = 0; i < y; i++) {
		if (i == 0) { // i가 0일 때 조건에 나누기가 있어 오류가 생김. 따로 처리해줌,
			for (int j = 0; j < x; j++) {
				cout << '*';
			}
		}
		else if (i == 1) {
			cout << '*' << '\n';
			continue;
		}
		else if (y / i >= 2) {// 조건, 
			for (int j = 0; j < x; j++) {
				if (j < i || y - i <= j) { // j가 i보다 작거나 전체 줄 수 y에서 현재 줄 수 i값을 뺀 값을 현재 칸 수 j와 비교
					if (j % 2 == 0) cout << '*';
					else cout << ' ';
				}
				else {
					if (i % 2 == 0) cout << '*';
					else cout << ' ';
				}
			}
		}
		else {
			for (int j = 0; j < x; j++) {
				if (j < i - 1 && j >= y - 1 - i) { // 10 - 7 <= 3,4,5,(6) < 7
					if (i % 2 == 0 && j % 2 == 0) {
						cout << '*';
					}
					else if (i % 2 == 1) cout << ' ';
					else cout << '*';
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