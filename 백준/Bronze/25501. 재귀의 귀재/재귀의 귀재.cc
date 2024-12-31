#include<iostream>
#include<string>
using namespace std;

int recursion(const string& s, int l, int r, int* ip) {
    (*ip)++;
    if (l >= r) return 1;
    else if (s[l] != s[r]) return 0;
    else return recursion(s, l + 1, r - 1, ip);
}

int isPalindrome(const string& s, int* ip) {
    return recursion(s, 0, s.size() - 1, ip);
}

int main(void) {
    int input;
    cin >> input;
    for (int i = 0; i < input; i++) {
        string str;
        cin >> str;
        int cnt = 0;
        cout << isPalindrome(str, &cnt) << " " << cnt << endl;
        getchar();
    }
}