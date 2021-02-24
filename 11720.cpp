#include <stdio.h>
#include <stdlib.h>

int main() {
    int cnt, sum = 0; 
    scanf("%d", &cnt);
    char* num = (char*)calloc(cnt, sizeof(char));
    
    scanf("%s", num); 
    for(int i = 0; i < cnt; i++)
        sum += (num[i] - '0');
    
    printf("%d\n", sum); 
    free(num); 
    return 0;
}
