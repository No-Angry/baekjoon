#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <set>
using namespace std;


int main(void) {
	int input, min = 1, status = 0;
	cin >> input;
	int max = input + 1;
	int arr[1000] = { 0 };
	vector<int> result, stack;
	for (int i = 0; i < input; i++) {
		cin >> arr[i];
	}
	for (int i = 0; i < input; i++) {
		
		if (arr[i] == min) {
			result.push_back(arr[i]);
			min++;
		}
		else if (arr[i] < max) {
			stack.push_back(arr[i]);
			max = arr[i] + 1;
		}
		else if (min == stack.back()) {
			result.push_back(stack.back());
			stack.pop_back();
			if (stack.size() == 0) max = input + 1;
			else max = stack.back() + 1;
			min = result.back() + 1;
			i--;
		}
		else break;
	}
	cout << ((stack.size() + result.size() == input) ? "Nice\n" : "Sad\n");

	return 0;
}