#include <stdio.h>
#include <string.h>

int tel_cton(char c);

int main() {
    int sec = 0; 
    char tel[16];
    scanf("%s", tel);
    
    for(int i = 0; tel[i] != NULL; i++)
        sec += tel_cton(tel[i]) + 1;
    printf("%d\n", sec);
    return 0; 
}

int tel_cton(char c) {
    char dial[8][5] = {"ABC", "DEF", "GHI", "JKL", "MNO", "PQRS", "TUV", "WXYZ"}; 
    for(int i = 0; i < 8; i++) {
        for(int j = 0; j < strlen(dial[i]); j++) {
            if(dial[i][j] == c)
                return i + 2;
        }
    }
}
