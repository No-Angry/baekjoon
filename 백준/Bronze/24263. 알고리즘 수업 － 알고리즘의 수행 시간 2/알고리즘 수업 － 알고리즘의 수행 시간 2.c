#include <stdio.h>

int main(void) { //시간복잡도 - o(n) : 상수시간을 제외한 입출력이 1 : 1로 대응됨.
    int a, sum = 0;
    scanf("%d", &a);
    for (int i = 0; i < a; i++) {
        sum += i;
    }
    printf("%d\n1", a);
    return 0;
}