#include <iostream>
#include <set>
using namespace std;

int main(void) {
	int input, x, max = 0, prev = 0;
	cin >> input;
	set<int> menu;
	for (int i = 0; i < input * 2; i++) {
		cin >> x;
		menu.insert(x);
		if (max < menu.size()) max = menu.size();
		else if (prev == menu.size()) menu.erase(x);
		prev = menu.size();
	}
	cout << max << '\n';
	return 0;
}