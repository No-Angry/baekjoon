#include <stdio.h>

int main(void) {
    int input, num, count = 0;

    scanf("%d", &input);
    for (int i = 0; i < input; i++) {
        int check = 1, j = 2;
        scanf("%d", &num);
        while (num != j) {
            if (num % j == 0 || num == 1) {
                check = 0;
                break;
            }
            j++;
        }
        if (check) count++;
    }
    printf("%d", count);
    return 0;
}