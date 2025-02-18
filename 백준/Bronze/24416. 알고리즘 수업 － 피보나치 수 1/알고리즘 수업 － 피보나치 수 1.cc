#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <set>
using namespace std;

int fib(int n, int* ip) {
	if (n == 1 || n == 2) {
		(*ip)++;
		return 1;
	}
	else return fib(n - 2, ip) + fib(n - 1, ip); // 3, 4 - 2, 3 - 1,2
}

void dp_fib(int n, int* ip) {
	vector<int> fibo;
	fibo.push_back(0);
	fibo.push_back(1);
	for (int i = 2; i < n; i++) {
		(*ip)++;
		fibo.push_back(fibo[0] + fibo[1]);
	}
}

int main(void) {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	int input;
	int count = 0;
	int* cnt = &count;

	cin >> input;
	fib(input, cnt);
	cout << count << ' ';
	count = 0;
	dp_fib(input, cnt);
	cout << count << '\n';
	return 0;
}