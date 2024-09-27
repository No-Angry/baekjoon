#include <stdio.h>

int main(void) {
    //첫번째 숫자가 두번째 숫자의 약수라면 factor, 배수라면 multiple, 둘다 아니라면 neither, 0 0 입력 시 종료
    int num1 = 0, num2 = 0;
    do {
        scanf("%d %d", &num1, &num2);
        if (num1 == 0 && num2 == 0) break;
        if (num2 % num1 == 0) printf("factor\n");
        else if (num1 % num2 == 0) printf("multiple\n");
        else printf("neither\n");
    } while (num1 != 0 || num2 != 0);
    return 0;
}