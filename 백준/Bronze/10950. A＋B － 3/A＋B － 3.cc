#include<iostream>
using namespace std;
void pl(int*, int*);

int main(void) {
	int input;
	cin >> input;
	for (int i = 0; i < input; i++) {
		int a = 0, b = 0;
		int* a1 = &a;
		int* b1 = &b;
		pl(a1, b1);
		cout << (a + b) << endl;
	}
	return 0;
}

void pl(int* a1, int* b1) {
	cin >> *a1 >> *b1;
}