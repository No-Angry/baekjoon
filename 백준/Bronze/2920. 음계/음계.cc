#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	int x, flag = 0;
	
	for (int i = 1; i <= 8; i++) {
		cin >> x;
		x == i ? flag++ : x + i == 9 ? flag-- : 0;
	}
	cout << (flag == 8 ? "ascending" : (flag == -8 ? "descending" : "mixed"));
	return 0;
}