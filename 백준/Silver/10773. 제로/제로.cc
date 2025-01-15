#include <iostream>
#include <vector>
#include <numeric>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	vector<int> stack;
	int input;
	cin >> input;
	for (; input--;) {
		int num;
		cin >> num;
		if (num == 0) stack.pop_back();
		else stack.push_back(num);
	}
	cout << accumulate(stack.begin(), stack.end(), 0) << '\n';
	return 0;
}