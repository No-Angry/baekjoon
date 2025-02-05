#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <set>
#include <numeric>
using namespace std;

void sosu(int s, int e) { 
	vector<int> check(e, 1); // 0이면 소수, 1이면 소수 아님
	check[0] = check[1] = 0;
	for (int i = 2; i * i <= e; i++) {
		if (check[i]) {
			for (int j = i * i; j < e; j += i) {
				check[j] = 0;
				//cout << j;
			}
		}
	}
	for (int i = 0; i < s; i++) {
		check[i] = 0;
	}
	cout << accumulate(check.begin(), check.end(), 0) << '\n';
}

int main(void) {
	while (1) {
		int start;
		cin >> start;
		if (start == 0) break;
		sosu(start + 1, start * 2 + 1);
	}
	
	return 0;
}