#include <stdio.h>

int main() {
    int t, k, n;
	scanf("%d", &t); 
	for (; t > 0; t--) {
		int rnum[14] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14 };
		scanf("%d %d", &k, &n);
		for (int i = 0; i < k; i++) {
			for (int j = 1; j < n; j++) {
				rnum[j] += rnum[j - 1];
			}
		}
		printf("%d\n", rnum[n - 1]);
	}
    return 0;
}
