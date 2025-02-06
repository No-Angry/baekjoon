#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <set>
#include <numeric>
using namespace std;

int main(void) {
	int a0, a1, c, n;
	cin >> a1 >> a0 >> c >> n;
	cout << ((a0 <= (c - a1) * n) && (c >= a1));

	return 0;
}