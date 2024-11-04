#include<iostream>
using namespace std;


int main(void) {
	char arr[101] = { 0 };
	int cnt = 0;
	cin >> arr;
	for (; arr[cnt] != 0; cnt++) {}
	cout << cnt;
	return 0;
}