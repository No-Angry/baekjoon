#include <stdio.h>

int main(void) {
    int num1, num2, min = 10001, sum = 0;
    scanf("%d\n%d", &num1, &num2);
    for (int i = num1; i <= num2; i++) {
        int check = 1, j = 2;
        while (i != j) {
            if (i % j == 0 || i == 1) {
                check = 0;
                break;
            }
            j++;
        }
        if (check == 1) {
            sum += i;
            if (min == 10001) {
                min = i;
            }
        }
    }
    if (min == 10001) printf("-1");
    else printf("%d\n%d", sum, min);
    return 0;
}