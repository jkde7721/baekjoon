#include <stdio.h>

int main() {
    int n, cnt, i;
	scanf("%d", &n);
	int* prime = (int*)malloc(sizeof(int) * (n / 2 + 2));
	prime[0] = 2; prime[1] = 3; cnt = 2;
	for (int num = 5; num * num <= n; num += 2) {
		for (i = 0; prime[i] * prime[i] <= num; i++)
			if (num % prime[i] == 0) break;
		if (prime[i] * prime[i] > num)
			prime[cnt++] = num;
	}

	for (i = 0; i < cnt; i++) {
		if (n % prime[i] == 0) {
			printf("%d\n", prime[i]);
			if ((n /= prime[i]) == 1) break;
			i = -1; 
		}
	}
	if (n != 1) printf("%d\n", n); 
	free(prime);
    return 0;
}
