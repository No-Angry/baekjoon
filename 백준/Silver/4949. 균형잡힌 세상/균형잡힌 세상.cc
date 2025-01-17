#include <iostream>
#include <vector>
#include <numeric>
#include <string>
using namespace std;

int main(void) {
	while (1) {
		vector<char> balance;
		string word;
		int small = 0, big = 0;
		getline(cin, word);
		if (word[0] == '.') return 0;
		for (char i : word) {
			if (i == '[') {
				big++;
				balance.push_back(i);
			}
			else if (i == '(') {
				small++;
				balance.push_back(i);
			}
			else if (i == ']') {
				if (balance.size() > 0) {
					if (balance.back() == '(') {
						break;
					}
					balance.pop_back();
				}
				big--;
			}
			else if (i == ')') {
				if (balance.size() > 0) {
					if (balance.back() == '[') {
						break;
					}
					balance.pop_back();
				}
				small--;
			}
			if (big < 0 || small < 0) break;
		}
		if (small == 0 && big == 0) cout << "yes" << '\n';
		else cout << "no" << '\n';
	}
}