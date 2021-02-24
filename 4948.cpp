#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int prime_num(int n, int m) {
    int lmt = (int)sqrt(m), cnt = 0;
    int* num = (int*)calloc(m + 1, sizeof(int));
    num[0] = 1; num[1] = 1; 
    
    for(int i = 2; i <= lmt; i++) {
        if(num[i] == 0) 
            for(int k = i * 2; k <= m; k += i) 
                num[k] = 1; 
    }
    
    for(int i = n; i <= m; i++) 
        if(num[i] == 0)
            cnt++;
    free(num);
    return cnt; 
}

int main() {
    int n;
	scanf("%d", &n);
	while (n != 0) {
		printf("%d\n", prime_num(n + 1, n * 2));
		scanf("%d", &n);
	}
    return 0;
}
