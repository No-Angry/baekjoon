#include<iostream>
#include<string>
using namespace std;

int fibo(int i, int cnt = 0, int x = 0, int x1 = 1) {
	if (i <= cnt) {
		cout << x << endl;
		return 0;
	}
	fibo(i, cnt + 1, x1, x + x1);
	return 0;
}

int main(void) {
	int input;
	cin >> input;

	fibo(input);
	return 0;
}