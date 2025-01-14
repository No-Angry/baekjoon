#include <iostream>
#include <vector>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	vector<int> arr;
	int input;
	cin >> input;
	for (int i = 0; i < input; i++) {
		int proc;
		cin >> proc;
		if (proc == 1) {
			int x;
			cin >> x;
			arr.push_back(x);
		}
		else if (proc == 2){
			if (arr.size() == 0) cout << -1 << '\n';
			else {
				cout << arr[arr.size() - 1] << '\n';
				arr.pop_back();
			}
		}
		else if (proc == 3) {
			cout << arr.size() << '\n';
		}

		else if (proc == 4) {
			if (arr.size() == 0) cout << 1 << '\n';
			else cout << 0 << '\n';
		}
		else if(proc == 5){
			if (arr.size() == 0) cout << -1 << '\n';
			else {
				cout << arr[arr.size() - 1] << '\n';
			}
		}
	}
	return 0;
}