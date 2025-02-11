#include <iostream>
using namespace std;

int main(void) {
	long long input;
	cin >> input;
	cout << ((input % 7 == 0 || input % 7 == 2) ? "CY\n" : "SK\n");
	return 0;
}