#include <stdio.h>
int main() {
    int a, b, c, n; // 21억 이하의 자연수!!! -> 그냥 +, * 연산시 오버플로우
    scanf("%d %d %d", &a, &b, &c);
    if(b < c) {
        n = a / (c - b); 
		printf("%d\n", ++n);
    }
    else 
        printf("%d\n", -1); 
    return 0;
}
