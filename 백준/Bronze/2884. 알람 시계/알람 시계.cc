#include<iostream>
using namespace std;

int main(void) {
	int h, m;
	cin >> h;
	cin >> m;

	m -= 45;
	if (m < 0) {
		if (h == 0) {
			h = 24;
		}
		h--;
		m = m + 60;
	}
	cout << h << " " << m << endl;

	return 0;
}