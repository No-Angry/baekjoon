#include<iostream>
using namespace std;
void check(int*, int*);

int main(void) {
	int money, input;
	cin >> money >> input;

	for (int i = 0; i < input; i++) {
		int price = 0, amount = 0;
		int* pPrice = &price;
		int* pAmount = &amount;
		check(pPrice, pAmount);
		money -= price * amount;
	}
	if (money == 0) cout << "Yes";
	else cout << "No";
	
	return 0;
}

void check(int* pPrice, int* pAmount) {
	cin >> *pPrice >> *pAmount;
}