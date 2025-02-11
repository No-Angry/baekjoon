#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <set>
#include <numeric>
using namespace std;

int main(void) {
	long long input, check = 1;
	int cnt = 0;
	cin >> input;

	while (input >= check * 4) {
		check *= 4;
		cnt++;
	}
	long long m = input - check - 3;
	vector<int> rule = { 0,1,0,1,0 };
	if (cnt % 2) rule[0] = 1, rule[1] = 0;
	cout << (rule[m % 5] ? "CY\n" : "SK\n");
	return 0;
}