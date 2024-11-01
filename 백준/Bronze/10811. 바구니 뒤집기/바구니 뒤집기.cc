#include<iostream>
using namespace std;

void change(int*, int);

int main(void) {
	int input, reps;
	cin >> input >> reps;
	int* box = new int[input];
	for (int i = 0; i < input; i++) {
		box[i] = i + 1;
	}
	change(box, reps);
	for (int i = 0; i < input; i++) {
		cout << box[i] << " ";
	}
	return 0;
}

void change(int* box, int rep) {
	int swapa, swapb, temp;
	for (int i = 0; i < rep; i++) {
		cin >> swapa >> swapb;
		for (; swapa < swapb; swapa++, swapb--) {
			temp = box[swapa-1];
			box[swapa-1] = box[swapb-1];
			box[swapb-1] = temp;
		}
	}
}