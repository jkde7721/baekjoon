#include <stdio.h>
#include <string.h>

int main() {
    int n, gw;
    scanf("%d", &n);
    gw = n; 
    int alpha[26] = {0, };
    char** word = (char**)malloc(sizeof(char*) * n);
    for(int i = 0; i < n; i++)
        word[i] = (char*)malloc(sizeof(char) * 101); 
    
    for(int i = 0; i < n; i++) 
        scanf("%s", word[i]); 
    
    char tmp; 
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < strlen(word[i]); j++) {
            tmp = word[i][j] - 97;
            if(alpha[tmp] == 0)
                alpha[tmp] = 1;
            else if(alpha[tmp] == 1 && word[i][j - 1] != tmp + 97){
                gw--; break; 
            }
        }
        for(int k = 0; k < 26; k++)
            alpha[k] = 0; 
    }
    
    printf("%d\n", gw); 
    for(int i = 0; i < n; i++)
        free(word[i]);
    free(word); 
    return 0;
}
