#include <iostream>
#include <vector>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	
	vector<int> tile = {1,2};
	int x;
	cin >> x;
	for (int i = 2; i < x; i++) {
		tile.push_back((tile[i - 2] + tile[i - 1]) % 10007);
	}
	cout << tile[x - 1];
	return 0;
}