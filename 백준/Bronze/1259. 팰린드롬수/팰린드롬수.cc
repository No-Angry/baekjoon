#include <iostream>
#include <string>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	string s;
	bool check;
	while (1) {
		check = true;
		cin >> s;
		if (s == "0") break;
		for (int i = 0; i <= s.size() / 2; i++) {
			if (s[i] != s[s.size() - 1 - i]) {
				check = false;
				break;
			}
		}
		cout << (check ? "yes" : "no") << '\n';
	}
	return 0;
}