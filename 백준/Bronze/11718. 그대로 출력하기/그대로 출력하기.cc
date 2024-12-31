#include<iostream>
#include<algorithm>
#include<string>
using namespace std;

int main(void) {
    string s;
    while (!cin.eof()) {
        getline(cin, s);
        cout << s << endl;
    }
    return 0;
}