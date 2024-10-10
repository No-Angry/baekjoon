    #include <stdio.h>

    int main(void) { //시간복잡도 - o(n^3) : 삼중 반복문
        long long a;
        scanf("%lld", &a);

        printf("%lld\n3", a * a * a);
        return 0;
    }