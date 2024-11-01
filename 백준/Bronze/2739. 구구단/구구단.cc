#include<iostream>
using namespace std;
void multi(int*);

int main(void) {
	int a = 0;
	int* b = &a;
	multi(b);
	for (int i = 1; i < 10; i++) {
		cout << a << " * " << i << " = " << (a * i) << endl;
	}
	return 0;
}

void multi(int* b) {
	cin >> *b;
}