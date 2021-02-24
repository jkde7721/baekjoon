#include <stdio.h>
int main() {
    int x, y, w, h;
    scanf("%d %d %d %d", &x, &y, &w, &h);
    w -= x; h -= y; 
    printf("%d\n", x < y ? (x < w ? (x < h ? x : h) : (w < h ? w : h)) : (y < w ? (y < h ? y : h) : (w < h ? w : h)));
    return 0;
}
