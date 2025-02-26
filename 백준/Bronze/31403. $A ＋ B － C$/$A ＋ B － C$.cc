#include <iostream>
#include <string>
using namespace std;

int main(void) {
	string x, y;
	int z;
	cin >> x >> y >> z;
	cout << stoi(x) + stoi(y) - z << '\n' << stoi(x + y) - z << '\n';
	return 0;
}