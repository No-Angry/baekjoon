#include <iostream>
#include <vector>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	int input, point, x = 0, y = 0, x_max = 0, y_max = 0;
	//input - 1m^2 당 참외 갯수 / point - 방향 / x, y - 작은 사각형 / x/y_max - 큰 사각형
	vector<int> square(6, 0);
	cin >> input;
	for (int i = 0; i < 6; i++) { // 큰 사각형 구하기
		cin >> point >> square[i];
		if (point == 1 || point == 2) x += square[i];
		else y += square[i];
	}
	x /= 2, y /= 2;
	for (int i = 0; i < 6; i++) {
		if (square[i % 6] == x || square[i % 6] == y) {
			x_max = ((square[(i + 1) % 6] == x || square[(i + 1) % 6] == y) ? i + 3 : i + 2) % 6;
			y_max = (x_max + 1) % 6;
			break;
		}
	}
	cout << (x * y - square[x_max] * square[y_max]) * input << '\n';
	return 0;
}