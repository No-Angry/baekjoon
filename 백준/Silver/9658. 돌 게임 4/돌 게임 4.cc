#include <iostream>
using namespace std;

int main(void) {
	int input;
	cin >> input;
	cout << ((input % 7 == 1 || input % 7 == 3) ? "CY\n" : "SK\n");
	return 0;
}