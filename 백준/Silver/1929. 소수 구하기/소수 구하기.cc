#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;

int check_sosu(int s) {
    if (s == 1) return 0; // 1은 소수가 아님
    else if (s == 2 || s == 3) return 1; // 2, 3은 소수
    else if (s % 2 == 0 || s % 3 == 0) return 0; // 2와 3으로 나누어 떨어지면 소수 아님.
    for (int i = 5; i * i <= s; i += 6) { // 소수는 4 이상이면 6k - 1 혹은 6k + 1을 판별. 조건에 만족하면 소수
        if (s % i == 0 || s % (i + 2) == 0) return 0;
    }
    return 1;
}

int main(void) {
    int start, end;
    cin >> start >> end; // 소수 판별할 기준 지정

    while (start <= end) {
        if (check_sosu(start)) {
            cout << start << endl;
        }
        if (start >= 5) {
            if (start % 6 == 1) start += 4;
            else if (start % 6 == 5) start += 2;
            else start += 1;
        }
        else start += 1;
    }
    return 0;
}