#include <stdio.h>

int main(void) {
    int x, y, w, h, min = 1001, temp = 1001;
    scanf("%d %d %d %d", &x, &y, &w, &h); // 수직선에 맞닿은 (0, 0) , (w, h) 사각형이 있고 (x, y) 좌표에서 사각형의 변까지 최단거리

    if (x < y) min = x;
    else min = y;
    if (w - x < h - y) temp = w - x;
    else temp = h - y;
    if (min < temp) printf("%d", min);
    else printf("%d", temp);

    return 0;
}