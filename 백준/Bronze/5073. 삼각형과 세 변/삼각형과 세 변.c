#include <stdio.h>

int main(void) {
    int a, b, c;// 정삼각형, 이등변삼각형, 삼각형, 조건 불충족

    while (1) {
        scanf("%d %d %d", &a, &b, &c);
        int max = a > b ? (a > c ? a : c) : (b > c ? b : c);
        if (a == 0 && b == 0 && c == 0) break;
        if ((max == a && b + c > max) || (max == b && a + c > max) || (max == c && a + b > max)) {
            if (a == b && b == c) printf("Equilateral\n");
            else if ((a == b && b != c) || (b == c && a != c) || (a == c && b != c)) printf("Isosceles\n");
            else printf("Scalene\n");
        }
        else printf("Invalid\n");
    }
    return 0;
}