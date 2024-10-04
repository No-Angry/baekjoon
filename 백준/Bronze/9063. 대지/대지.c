#include <stdio.h>

int main(void) {
    int x[100000] = { 0 }, y[100000] = { 0 };
    int ball, minx = 10001, miny = 10001, maxx = -10001, maxy = -10001;
    scanf("%d", &ball);
    for (int i = 0; i < ball; i++) {
        scanf("%d %d", &x[i], &y[i]);
        if (x[i] < minx) minx = x[i];
        if (y[i] < miny) miny = y[i];
        if (x[i] > maxx) maxx = x[i];
        if (y[i] > maxy) maxy = y[i];
    }
    printf("%d", (maxx - minx) * (maxy - miny));
    return 0;
}