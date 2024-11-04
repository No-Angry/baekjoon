#include<iostream>
using namespace std;


int main(void) {
	char arr[1001] = { 0 };
	int index = 0;
	cin >> arr >> index;
	cout << arr[index - 1];

	return 0;
}