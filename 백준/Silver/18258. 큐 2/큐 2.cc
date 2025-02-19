#include <iostream>
#include <vector>
#include <deque>
#include <string>
#include <algorithm>
#include <set>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	deque<int> dq;
	int input, push;
	string command;
	cin >> input;
	for (; input--;) {
		cin >> command;
		if (command == "push") {
			cin >> push;
			dq.push_back(push);
		}
		else if (command == "pop") {
			if (!dq.size()) cout << -1 << '\n';
			else {
				cout << dq[0] << '\n';
				dq.pop_front();
			}
		}
		else if (command == "size") {
			cout << dq.size() << '\n';
		}
		else if (command == "empty") {
			cout << !(dq.size()) << '\n';
		}
		else if (command == "front") {
			if (!dq.size()) cout << -1 << '\n';
			else {
				cout << dq[0] << '\n';
			}
		}
		else if (command == "back") {
			if (!dq.size()) cout << -1 << '\n';
			else {
				cout << dq[dq.size() - 1] << '\n';
			}
		}
	}
	return 0;
}