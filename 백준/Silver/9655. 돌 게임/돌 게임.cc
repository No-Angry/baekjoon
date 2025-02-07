#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <set>
#include <numeric>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	int stone;
	cin >> stone;
	
	cout << ((stone % 2) ? "SK\n" : "CY\n");
	return 0;
}