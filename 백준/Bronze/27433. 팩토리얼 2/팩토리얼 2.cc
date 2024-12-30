#include<iostream>
#include<string>
using namespace std;

int facto(int i, int cnt = 0, long long int x = 1) {
	if (i <= cnt) {
		cout << x << endl;
		return 0;
	}
	cnt++;
	facto(i, cnt, x * cnt);
	return 0;
}

int main(void) {
	int input;
	cin >> input;

	facto(input);
	return 0;
}