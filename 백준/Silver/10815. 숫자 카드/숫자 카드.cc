#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <set>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	set<int> s;
	int input, x;
	cin >> input;
	for (int i = 0; i < input; i++) {
		cin >> x;
		s.insert(x);
	}
	int equal;
	cin >> equal;
	for (int i = 0; i < equal; i++) {
		cin >> x;
		s.insert(x);
		if (s.size() == input) cout << "1 ";
		else {
			cout << "0 ";
			input++;
		}
	}
	cout << '\n';
	return 0;
}