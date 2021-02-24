#include <stdio.h>
#include <math.h>
int main() {
    int t, x, y, dis, times, max;
	scanf("%d", &t);
	for (; t > 0; t--) {
		scanf("%d %d", &x, &y);
		max = times = (int)sqrt(y - x);
		dis = (y - x) - (((1 + max) * max / 2) * 2 - max);
		times += (max - 1) + dis / max + (dis % max ? 1 : 0);
		printf("%d\n", times);
	}
    return 0;
}
