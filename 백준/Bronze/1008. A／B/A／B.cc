#include<iostream>
using namespace std;

int main(void) {
	double a, b;
	cin >> a;
	cin >> b;
	cout << fixed;
	cout.precision(9);
	cout << static_cast<double>(a / b) << endl;
	return 0;
}