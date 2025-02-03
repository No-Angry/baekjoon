#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <set>
using namespace std;

int main(void) {
	int input, x;
	cin >> input;
	int arr[10001] = { 0 };
	for (int i = 0; i < input; i++) {
		cin >> x;
		arr[x]++;
	}
	for (int i = 1; i < 10001; i++) {
		for (int j = 0; j < arr[i]; j++) {
			cout << i << '\n';
		}
	}
	return 0;
}