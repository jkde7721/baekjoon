#include <stdio.h>
#include <math.h>
int main() {
    int m, n, i = 1, j, cnt, ptr = 0;
	scanf("%d %d", &m, &n);
	int* prime = (int*)malloc(sizeof(int) * (n / 2 + 2));
	prime[0] = 2; prime[1] = 3; cnt = 2;
	int* ran = (int*)malloc(sizeof(int) * (n - m + 1));

	for (int num = 2; num <= n; i++) {
		for (j = 0; prime[j] <= (int)sqrt(num); j++) 
			if (num % prime[j] == 0) break;
		if (prime[j] > (int)sqrt(num)) {
			if(num > 3) prime[cnt++] = num;
			if(num >= m) ran[ptr++] = num;
		}
		num = i * 2 + 1; 
	}

	if (ptr == 0) printf("%d\n", -1);
	else {
		int sum = 0;
		for (int k = 0; k < ptr; k++)
			sum += ran[k];
		printf("%d\n%d\n", sum, ran[0]);
	}
	free(prime); free(ran);
    return 0;
}
