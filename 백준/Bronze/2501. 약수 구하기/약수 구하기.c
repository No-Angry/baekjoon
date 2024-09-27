#include <stdio.h>

int main(void) {
    
    int num, x, result = 0, count = 0;
    scanf("%d %d", &num, &x);
    for (int i = 1; i <= num; i++) {
        if (num % i == 0) count++;
        else continue;
        if (count == x) {
            result = i;
            break;
        }
    }
    if (count < x) result = 0;
    printf("%d", result);
    return 0;
}