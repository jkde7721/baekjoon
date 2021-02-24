#include <stdio.h>
#include <math.h>

void hanoi(int n, int start, int des) {
    if(n > 1) hanoi(n - 1, start, 6 - start - des); 
    printf("%d %d\n", start, des);
    if(n > 1) hanoi(n - 1, 6 - start - des, des); 
}

int main() {
    int n;
    scanf("%d", &n);
    printf("%d\n", (int)pow(2, n) - 1);
    hanoi(n, 1, 3); 
    return 0;
}
