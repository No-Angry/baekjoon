#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int n;
    string xstring, ystring;
    cin >> n >> xstring;
    for (int i = 0; i < n - 1; i++) {
        cin >> ystring;
        for (int j = 0; j < xstring.size(); j++) {
            if (xstring[j] != ystring[j]) xstring[j] = '?';
        }
    }
    cout << xstring;
    return 0;
}