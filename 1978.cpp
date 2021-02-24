#include <stdio.h>

int main() {
    int n, x, prime = 0, num;
	scanf("%d", &n);
	for (; n > 0; n--) {
		scanf("%d", &x); num = 2;
		while (x > num) {
			if (x % num == 0) break;
			num++;
		}
		if (num == x) prime++;
	}
	printf("%d\n", prime);
    return 0;
}
