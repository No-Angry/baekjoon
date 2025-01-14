#include <iostream>
#include <vector>
using namespace std;
struct stack {
	int* arr;
	int last;

	void init(int n) {
		arr = new int[n];
		last = -1;
	}
	~stack() {
		delete[] arr;
	}
	void push(int data) {
		arr[++last] = data;
	}
	int pop(void) {
		if (empty()) return -1;
		return arr[last--];
	}
	int size(void) {
		return last + 1;
	}
	bool empty(void) {
		return (last < 0);
	}
	int top(void) {
		if (empty()) return -1;
		return arr[last];
	}

};
int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int n;
	cin >> n;
	stack s;
	s.init(n);
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