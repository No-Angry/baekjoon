#include<iostream>
#include<algorithm>
#include<string>
#include<cctype>
using namespace std;

int main(void) {
    string s;
    int alpha[26] = { 0 };
    char maxAlpha = 0; // 가장 많은 알파벳
    int maxValue = 0; // 가장 많은 알파벳의 개수
    int check = 0; // maxValue에 해당하는 알파벳 2개 이상 여부

    cin >> s;
    for (int i = 0; i < s.size(); i++) {
        int value = toupper(s[i]) - 'A'; // 문자열에서 문자를 하나씩 가져와 대문자로 바꾼 후 'A'를 뺀 값을 구함. 0 ~ 26
        alpha[value]++; // A ~ Z 의 인덱스를 가진 배열에 해당하는 인덱스를 +1 해준다.
    }
    for (int i = 0; i < sizeof(alpha) / sizeof(*alpha); i++) {
        if (maxValue < alpha[i]){
            maxAlpha = i + 'A';
            maxValue = alpha[i];
            check = 0;
        }
        else if (maxValue == alpha[i] && maxAlpha != 0) { // 알파벳 수가 maxValue와 같으면
            check = 1; // ? 대기
        }
    }
    if (check == 1) cout << '?' << endl;
    else cout << maxAlpha << endl;
    return 0;
}