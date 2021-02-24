#include <stdio.h>

int main() {
    int t, w, h, n, rnum;
    scanf("%d", &t);
    
    for(int i = 0; i < t; i++) {
        scanf("%d %d %d", &h, &w, &n);
        rnum = (n % h ? n % h : h) * 100 + n / h + (n % h ? 1 : 0);
        printf("%d\n", rnum); 
    }
    return 0;
}
