#include <stdio.h>
int main() {
    int x, y, z, tmp;
    while(1) {
		scanf("%d %d %d", &x, &y, &z);
		if (!x && !y && !z) break;
		if (x > y && x > z) {tmp = x; x = z; z = tmp;}
		if (y > z && y > z) {tmp = y; y = z; z = tmp;}
		printf(x * x + y * y == z * z ? "right\n" : "wrong\n");
    }
    return 0;
}
