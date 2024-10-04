#include <stdio.h>

int main(void) {
    int a, b, c;// 정삼각형, 이등변삼각형, 삼각형, 조건 불충족
    scanf("%d\n%d\n%d", &a, &b, &c);

    if (a + b + c == 180) {
        if (a == b && b == c) printf("Equilateral");
        else if ((a == b && b != c) || (b == c && a != c) || (a == c && b != c)) printf("Isosceles");
        else printf("Scalene");
    }
    else printf("Error");

    return 0;
}