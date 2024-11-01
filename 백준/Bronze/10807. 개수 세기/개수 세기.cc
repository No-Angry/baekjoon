#include<iostream>
using namespace std;

void arrin(int*, int);

int main(void) {
	int input;
	cin >> input;
	int* arr = new int[input];
	
	for (int i = 0; i < input; i++) {
		arrin(arr, i);
	}

	int cnt = 0, target = 0;
	cin >> target;
	for (int i = 0; i < input; i++) {
		if (target == arr[i]) {
			cnt++;
		}
	}
	cout << cnt << endl;
	delete[] arr;
	arr = nullptr;
	return 0;
}

void arrin(int* arr, int a) {
	cin >> arr[a];
}