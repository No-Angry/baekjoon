#include <iostream>
using namespace std;

int main(void) {
	int input, x, y;
	cin >> input;
	int apart[15][15] = { 0 };
	for (; input--;) {
		cin >> y >> x;
		apart[0][0] = 1;
		for (int i = 0; i <= y; i++) {
			for (int j = 1; j <= x; j++) {
				if (i == 0) {
					apart[i][j] = j;
				}
				else {
					apart[i][j] = apart[i - 1][j] + apart[i][j - 1];
				}
			}
		}
		cout << apart[y][x] << '\n';
	}
	return 0;
}