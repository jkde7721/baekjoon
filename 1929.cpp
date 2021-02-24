#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    int m, n, sum, lmt;
	scanf("%d %d", &m, &n);
	int* num = (int*)calloc(n + 1, sizeof(int)); 
	num[0] = num[1] = 1; lmt = (int)sqrt(n);
	// 요소의 값이 0이면 소수 
	for (int i = 2; i <= lmt; i++) {
		if (num[i] == 0) {
			sum = i;
			while ((sum += i) <= n) 
				num[sum] = 1;
		}
	}
	for (; m <= n; m++)
		if (num[m] == 0) printf("%d\n", m); 
	free(num);
    return 0;
}
