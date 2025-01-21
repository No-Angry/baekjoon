#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <set>
using namespace std;

int recursion(int x, int y) {
	if ((x - 1) % 3 == 0 && (y - 1) % 3 == 0) return 1; // 4나 7이 나와도 이 조건에 만족해야함.
	else if (x < 1) return 0;
	return recursion(x / 3, y / 3);
}

int main(void) {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	int input;
	cin >> input;
	for (int i = 0; i < input; i++) {
		for (int j = 0; j < input; j++) {
			if (recursion(i, j)) cout << " ";
			else cout << "*";
		}
		cout << '\n';
	}
	return 0;
}