#include <iostream>
using namespace std;

int main(void) {
	int input;
	cin >> input;
	for (int i = 0; i < input; i++) {
		for (int j = 0; j < input * 2 - 1; j++) {
			if (input - i - 2 >= j) cout << ' ';
			else if (input - 1 < j - i) {
				cout << ' ';
				break;
			}
			else cout << '*';
		}
		cout << '\n';
	}
}