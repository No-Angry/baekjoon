#include <stdio.h>

int main(void) {
    int a, b, c;// 정삼각형, 이등변삼각형, 삼각형, 조건 불충족
    scanf("%d %d %d", &a, &b, &c);
    int max = a > b ? (a > c ? a : c) : (b > c ? b : c);
    if ((max == a && b + c > max) || (max == b && a + c > max) || (max == c && a + b > max)) printf("%d", a + b + c);
    else if (max == a) {
        a = b + c - 1;
        printf("%d", a + b + c);
    }
    else if (max == b) {
        b = a + c - 1;
        printf("%d", a + b + c);
    }
    else {
        c = a + b - 1;
        printf("%d", a + b + c);
    }
    return 0;
}