#include <stdio.h>

int main(void) { //시간복잡도 - o(n^2) : 이중 반복문은 상수시간 제외 n의 제곱만큼 수행 시간이 적용됨.
    long long a, sum = 0;
    scanf("%lld", &a);
    for (int i = 0; i < a; i++) {
        for (int j = 0; j < a; j++) {
            sum += i * j;
        }
    }
    printf("%lld\n2", a * a);
    return 0;
}