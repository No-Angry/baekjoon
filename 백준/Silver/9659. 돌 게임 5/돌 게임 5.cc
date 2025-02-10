#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <set>
#include <numeric>
using namespace std;

int main(void) {
	long long stone;
	cin >> stone; // 1,3,4
	
	cout << ((stone % 2) ? "SK\n" : "CY\n");
	return 0;
}