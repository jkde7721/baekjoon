#include <stdio.h>

int main() {
    int i = 1, sum = 0, num;
    scanf("%d", &num);
    while((sum += i) < num)
        i++;
    if(i % 2) 
        printf("%d/%d\n", 1 + sum - num, i - sum + num);
    else
        printf("%d/%d\n", i - sum + num, 1 + sum - num);
    return 0;
}
