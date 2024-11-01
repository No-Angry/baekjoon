#include<iostream>
using namespace std;

int main(void) {
	int a, b;
	cin >> a;
	cin >> b;
	if (a > b) cout << ">";
	else if (a < b) cout << "<";
	else cout << "==";
}