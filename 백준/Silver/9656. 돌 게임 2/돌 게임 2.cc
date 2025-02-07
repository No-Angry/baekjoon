#include <iostream>
using namespace std;

int main(void) {
	int stone;
	cin >> stone;
	
	cout << ((stone % 2) ? "CY\n" : "SK\n");
	return 0;
}