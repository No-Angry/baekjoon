#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	int time[1001] = { 0 };
	int person, x, sum = 0, res = 0;
	cin >> person;
	for (; person--;) {
		cin >> x;
		time[x]++;
	}
	for (int i = 1; i <= 1000; i++) { // 배열을 돌며 누적 합
		for (; time[i]--;) { //각 인덱스의 값만큼 반복.
			sum += i; // 1*1 2*1 3*2 3*1 4*1
			res += sum;
		}
	}
	cout << res << '\n';
	return 0;
}