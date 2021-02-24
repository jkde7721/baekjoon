#include <stdio.h>

int main() {
    char word[1000000], temp;
    int alpha[26] = {0, }, idx = 0, snum = 0; 
    scanf("%s", word);
    
    for(int i = 0; word[i] != NULL; i++) {
        temp = word[i];
        if(temp <= 90)
            alpha[temp - 65]++; 
        else
            alpha[temp - 97]++;
    }
    
    for(int i = 0; i < 26; i++) 
        if(alpha[idx] < alpha[i])
            idx = i; 
    for(int i = 0; i < 26; i++) 
        if(alpha[idx] == alpha[i])
            snum++;
    if(snum >= 2)
        printf("?\n");
    else
        printf("%c\n", idx + 65); 
    return 0;
}
