#include <stdio.h>

int main(void) {
    int input = 0;
    while (1) { // -1이 들어올 때까지 무한반복, EOF 사용 가능한지 확인해야함
        int count = 0, temp = 0, check = 1;
        int factor[10000] = { 0 };
        scanf("%d", &input);
        if (input == -1) break;
        for (int i = 1; i < input; i++) { // input 전까지 반복
            if (input % i == 0) { // i가 약수면
                factor[count] = i; // 배열에 저장
                count++; //순서대로 배열에 저장을 위한 증감
                temp += i;
            }
        }

        if (temp != input) {
            check = 0;
        }
        if (check == 0) printf("%d is NOT perfect.\n", input);
        else {
            printf("%d = ", input);
            if (count > 0) count--;
            for (int i = 0; factor[i] != factor[count]; i++) {
                printf("%d + ", factor[i]);
            }
            printf("%d\n", factor[count]);
        }
    }
    return 0;
}