#include <stdio.h>
int main() {
    int n = 1, num; // 0, 6, 12 ... 인 등차수열의 합 + 1
    scanf("%d", &num);
    while((n - 1) * 3 * n + 1 < num)
        n++;
    printf("%d\n", n); 
    return 0;
}
