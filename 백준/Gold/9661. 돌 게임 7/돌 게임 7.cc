#include <iostream>
using namespace std;

int main(void) {
	long long input;
	cin >> input;
	int rule[5] = {1,0,1,0,0};
	cout << (rule[input % 5] ? "CY\n" : "SK\n");
	return 0;
}