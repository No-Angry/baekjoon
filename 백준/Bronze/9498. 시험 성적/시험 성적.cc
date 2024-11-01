#include<iostream>
using namespace std;

int main(void) {
	int score;
	cin >> score;
	score /= 10;
	switch (score) {
	case 10:
	case 9:
		cout << "A" << endl;
		break;
	case 8:
		cout << "B" << endl;
		break;
	case 7:
		cout << "C" << endl;
		break;
	case 6:
		cout << "D" << endl;
		break;
	default:
		cout << "F" << endl;
	}
	return 0;
}