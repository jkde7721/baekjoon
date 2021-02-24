#include <stdio.h>
#define MAX_LEN 1000001

int main() {
    char sen[MAX_LEN];
    int space = 0, i;
    fgets(sen, MAX_LEN, stdin); // '\n(enter)'를 입력값으로 인식 
    
    for(i = 0; sen[i] != NULL; i++) { 
        if(sen[i] == ' ')
            space++;
    }
    if(sen[0] == ' ')
        space--;
    if(sen[i - 2] == ' ')
        space--;
    printf("%d\n", space + 1); 
    return 0;
}
