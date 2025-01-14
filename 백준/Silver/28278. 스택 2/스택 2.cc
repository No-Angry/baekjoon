#include <iostream>
#include <cmath>
#include <vector>
using namespace std;
struct stack {
	vector<int> arr;
	int last;
	void push(int data) {
		arr.push_back(data);
	}
	int pop(void) {
		if (empty()) return -1;
		last = arr[arr.size() - 1];
		arr.pop_back();
		return last;
	}
	int size(void) {
		return arr.size();
	}
	bool empty(void) {
		return (arr.size() < 1);
	}
	int top(void) {
		if (empty()) return -1;
		return arr[arr.size() - 1];
	}

};
int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int n;
	cin >> n;
	stack s;
	for (; n--;) { // n--를 수행하고 0이면 종료
		int proc, x;
		cin >> proc;
		switch (proc) {
		case 1:
			cin >> x;
			s.push(x);
			break;
		case 2:
			cout << s.pop() << '\n';
			break;
		case 3:
			cout << s.size() << '\n';
			break;
		case 4:
			cout << s.empty() << '\n';
			break;
		case 5:
			cout << s.top() << '\n';
		}
	}
	return 0;
}