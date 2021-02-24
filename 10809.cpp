#include <stdio.h>

int main() {
    int alpha[26], idx;
    char word[100];
    scanf("%s", word); 
    
    for(int i = 0; i < 26; i++)
        alpha[i] = -1; 
    for(int i = 0; word[i] != NULL; i++) {
        idx = word[i] - 97;
        if(alpha[idx] == -1) 
            alpha[idx] = i;
    }
    
    for(int i = 0; i < 26; i++) {
        printf("%d ", alpha[i]); 
    }
    return 0;
}
