#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <set>
#include <numeric>
using namespace std;

int main(void) {
	int x, result = 0;
	cin >> x;
	for (int i = 1; i * i <= x; i++) {
		result += 1;
	}
	cout << result;

	return 0;
}