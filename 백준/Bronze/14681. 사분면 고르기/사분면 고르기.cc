#include<iostream>
using namespace std;

int main(void) {
	int x, y;
	cin >> x;
	cin >> y;

	if (x < 0 && y < 0) cout << "3" << endl;
	else if (x > 0 && y < 0) cout << "4" << endl;
	else if (x > 0 && y > 0) cout << "1" << endl;
	else cout << "2" << endl;

	return 0;
}