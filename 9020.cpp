#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define MAX 10000

int main() {
    int t, n, lmt = (int)sqrt(MAX), x, y;
	int prime[MAX + 1] = {1, 1, }; 
	for (int i = 2; i <= lmt; i++) {
		if (prime[i] == 0)
			for (int j = i * i; j <= MAX; j += i)
				prime[j] = 1;
	}
	scanf("%d", &t);

	for (; t > 0; t--) {
		scanf("%d", &n);
        x = y = n / 2;
        while(prime[x] != 0 || prime[y] != 0) {
            x--; y++; 
        }
        printf("%d %d\n", x, y); 
	}
    return 0;
}
