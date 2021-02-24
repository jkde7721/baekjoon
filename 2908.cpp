#include <stdio.h>
#include <string.h>
#define MAX_LEN 8

void revstr(char* s, char* r, int size); // size는 NULL을 제외한 문자열의 길이

int main() {
    int a, b;
    char str[MAX_LEN];
    char reverse[MAX_LEN];
    fgets(str, MAX_LEN, stdin);
    revstr(str, reverse, strlen(str));
    
    char* token = strtok(reverse, " ");
    a = atoi(token);
    token = strtok(NULL, " ");
    b = atoi(token);
    
    if(a > b)
        printf("%d\n", a);
    else
        printf("%d\n", b); 
    return 0;
}

void revstr(char* s, char* r, int size) {
    int idx = size, i;
    for(i = 0; i < size; i++)
        r[i] = s[--idx];
    r[i] = NULL; 
}
