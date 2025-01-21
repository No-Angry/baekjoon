#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <set>
using namespace std;

int recursion(int x, int cnt, int temp) {
	if (x == cnt++) return temp; // 입력한 값과 카운트가 같으면 temp를 반환
	return recursion(x, cnt, temp * 3); // cnt가 같을 때까지 recursive 해줌. x=2, cnt=0, temp=1 / x=2, cnt=1, temp=3 / x=2, cnt=2, temp=9
}

int recursive(int x) {
	if (x % 3 == 1) return 1;
	if (x < 1) return 0;
	return recursive(x / 3);
}

int main(void) {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	int input;
	while (1) {
		cin >> input;
		if (cin.eof()) {
			return 0;
		}
		for (int i = 0; i < recursion(input, 0, 1); i++) {
			if (recursive(i)) cout << ' ';
			else cout << '-';
		}
		cout << '\n';
	}
	return 0;
}