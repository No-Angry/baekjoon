#include <iostream>
using namespace std;

int main(void) {
	int input;
	cin >> input;
	cout << ((input % 7 == 2 || input % 7 == 0) ? "CY\n" : "SK\n");
	return 0;
}