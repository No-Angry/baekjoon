#include<iostream>
using namespace std;

int main(void) {
	int h, m, t;
	cin >> h;
	cin >> m;
	cin >> t;

	m += t;
	if (m >= 60) {
		h += m / 60;
		m %= 60;
		if (h >= 24) {
			h %= 24;
		}
	}
	cout << h << " " << m << endl;
	return 0;
}