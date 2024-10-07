    #include <stdio.h>

    int main(void) { //시간복잡도 - o(n^2) : 중첩 반복문에서 입력이 늘어날 때마다 수행시간이 입력의 제곱에 비례해서 늘어남
        long long a, sum = 0;
        scanf("%d", &a);
        for (int i = 1; i < a; i++) { // i = 1 ~ (a - 1)
            for (int j = i + 1; j <= a; j++) { // j = 2 ~ (a - 1)
                sum += i * j;
            }
        }
        printf("%lld\n2", a * (a - 1) / 2); // 1부터 a까지의 합만큼 수행시간이 적용됨.
        return 0;
    }