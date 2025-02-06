#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <set>
#include <numeric>
using namespace std;

void sosu(int e) {
	vector<int> check(e, 1); // 0이면 소수 아님, 1이면 소수
	check[0] = check[1] = 0;
	for (int i = 2; i * i <= e; i++) {
		if (check[i]) {
			for (int j = i * i; j < e; j += i) {
				check[j] = 0;
			}
		}
	}
	int cnt = 0;
	for (int i = 2; i * 2 <= e; i++) {
		if (check[e - i] && check[i]) {
			cnt++;
		}
		check[e - i] = 0;
	}
	cout << cnt << '\n';
}

int main(void) {
	int input, x;
	cin >> input;
	for (int i = 0; i < input; i++) {
		cin >> x;
		sosu(x);
	}
	return 0;
}