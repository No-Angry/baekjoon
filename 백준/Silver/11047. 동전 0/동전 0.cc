#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <set>
#include <numeric>
using namespace std;

int main(void) {
	int input, price, cnt = 0, max = 0;
	cin >> input >> price;
	vector<int> coin(input);
	for (int i = 0; i < input; i++) {
		cin >> coin[i];
	}
	while (price != 0) {
		for (int i = input - 1; i >= 0; i--) {
			if (coin[i] <= price) {
				input = i;
				break;
			}
		}
		cnt += price / coin[input];
		price = price % coin[input];
	}
	cout << cnt;
	return 0;
}