#include<iostream>
#include<algorithm>
#include<string>
using namespace std;

int main(void) {
    string s;
    int cnt = 1;
    getline(cin, s);
    if (s.size() == 1 && s[0] == ' ') {
        cnt = 0;
        cout << cnt << endl;
        return 0;
    }
    while (s.front() == ' ') s.erase(0,1);
    while (s.back() == ' ') s.pop_back();
    
    for (int i = s.size() - 1; i >= 0; i--) {
        if (s[i] == ' ') {
            cnt++;
            s.erase(i, s.size() - 1);
        }
    }
    
    cout << cnt << endl;
    return 0;
}