#include <stdio.h>

int main(void) {
    int input;
    scanf("%d", &input);
    for (int i = 2; i <= input; i++) { // ->for문 조건인 input이 직접 나누어지기 때문에 조건식 조정.
        if (input == 1) {
            printf("0");
            break;
        }
        else if (input % i == 0) {
            while (input % i == 0) { // 나눗셈이 두 번 이상 발생하지 않으면 출력 오류 발생. 
                printf("%d\n", i);
                input /= i;
            }
        }
        else continue;
    }
    return 0;
}