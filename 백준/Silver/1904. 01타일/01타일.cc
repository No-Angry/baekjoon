#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <set>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	vector<int> fib(1000001, 1);
	int input, check = 1;
	cin >> input;
	for (int i = 2; i <= input; i++) {
		fib[i] = (fib[i - 2] + fib[i - 1]) % 15746;
	}
	cout << fib[input] << '\n';
	return 0;
}