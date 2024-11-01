#include<iostream>
using namespace std;

int main(void) {
	int a, b, c;
	cin >> a >> b >> c;
	int max = (a > b) ? (a > c ? a : c) : (b > c ? b : c);
	if (a == b && a == c) cout << a * 1000 + 10000 << endl;
	else if (a != b && a != c && b != c) cout << max * 100 << endl;
	else {
		a = (a == b || a == c) ? a : b;
		cout << a * 100 + 1000 << endl;
	}
	return 0;
}