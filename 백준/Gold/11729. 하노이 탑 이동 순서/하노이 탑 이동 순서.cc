#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <set>
using namespace std;

void hanoi(int n, int a, int temp, int c) {
	if (n == 1) {
		cout << a << ' ' << c << '\n';
		return;
	}
	
	hanoi(n - 1, a, c, temp); // a에 있는 n - 1 개의 원판을 c를 보조로 해서 b로 옮김.
	cout << a << ' ' << c << '\n'; // 이동 순서 표시
	return hanoi(n - 1, temp, a, c); // b에서 a를 보조로 해서 c로 옮김.
}

int main(void) {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	int input;
	cin >> input;
	vector<int> hanoi_cnt;
	if (input < 1) return 0;
	hanoi_cnt.push_back(1); // 0번째 배열에 1 대입.
	for (int i = 0; i < input - 1; i++) {
		hanoi_cnt.push_back(hanoi_cnt[i] * 2 + 1);
	}
	cout << hanoi_cnt[hanoi_cnt.size()-1] << '\n';
	if(input <= 20) hanoi(input, 1, 2, 3);
	return 0;
}