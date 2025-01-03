#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;

int check_sosu(unsigned int s) {
    if (s == 1) return 1; // 1은 소수가 아님
    else if (s == 2 || s == 3) return 0; // 2, 3은 소수
    else if (s % 2 == 0 || s % 3 == 0) return 1; // 2와 3으로 나누어 떨어지면 소수 아님.
    for (int i = 5; i * i <= s; i += 6) { // 소수는 4 이상이면 6k - 1 혹은 6k + 1을 판별. 조건에 만족하면 소수
        if (s % i == 0 || s % (i + 2) == 0) return 1;
    }
    return 0;
}

int main(void) {
    int input;
    cin >> input;
    for (int i = 0; i < input; i++) { // input만큼 테스트케이스 작동
        unsigned int sosu;
        int check = 0;
        cin >> sosu; // 소수 판별할 기준 지정

        while (check_sosu(sosu)) sosu++;
        cout << sosu << endl;

        /*check = check_sosu(sosu);
        if (!check) cout << check << endl;*/

        //int j = sosu; // 기준부터 1씩 올라가는 수. 무한 루프가 진행되는 동안 +1 증가
        //while (1) { // 소수를 찾을 때까지 무한 루프
        //    
        //    for (int k = 2; k <= sqrt(j); k++) { // k를 1부터 루트j까지 반복. 제곱근보다 큰 수는 이전에 수행할 때 걸러짐.
        //        if (j % k == 0) {
        //            check = 0;
        //            break; // 나누어 떨어지면 소수 아님.
        //        } 
        //        check = 1; // 끝까지 갔으면(소수 판별을 끝까지 진행했으면) check 변수를 1로 지정
        //    }
        //    if (check == 1) break; //소수 판별되면 탈출
        //    j++; // j를 1 증가 시킴.
        //}
        //cout << j << endl;
    }
    return 0;
}