#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <set>
using namespace std;


int main(void) {
	int slice, brand, cost;
	int sixmin = 1001, onemin = 1001;
	cin >> slice >> brand;
	int sixline[50] = { 0 }, oneline[50] = { 0 };
	
	for (int i = 0; i < brand; i++) {
		cin >> sixline[i] >> oneline[i];
		if (sixmin > sixline[i]) sixmin = sixline[i];
		if (onemin > oneline[i]) onemin = oneline[i];
	}
	if (6 * onemin < sixmin) cout << onemin * slice << '\n';
	else if (slice % 6 * onemin > sixmin) cout << (slice / 6 + 1) * sixmin << '\n';
	else cout << slice / 6 * sixmin + slice % 6 * onemin << '\n';
	return 0;
}