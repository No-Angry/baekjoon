#include <iostream>
#include <string>
using namespace std;

int main(void) {
	int input, sum, inc;
	string s;
	cin >> input;
	for (; input--;) {
		sum = 0, inc = 0;
		cin >> s;
		for (int i = 0; i < s.size(); i++) {
			if (s[i] == 'O') {
				inc++;
				sum += inc;
			}
			else inc = 0;
		}
		cout << sum << '\n';
	}
	return 0;
}