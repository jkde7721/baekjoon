include <stdio.h>

int main() {
    int t, r, idx;
    char s[20];
    scanf("%d", &t);
    char** p = (char**)malloc(sizeof(char*) * t);
    for(int i = 0; i < t; i++) {
        p[i] = (char*)malloc(sizeof(char) * 160); 
    }
    
    for(int i = 0; i < t; i++) {
        idx = 0; 
        scanf("%d %s", &r, s);
        for(int j = 0; s[j] != NULL; j++) {
            for(int n = 0; n < r; n++) {
                p[i][idx++] = s[j];
            }
        }
        p[i][idx] = NULL; 
    }
    
    for(int i = 0; i < t; i++) {
        printf("%s\n", p[i]); 
    }
    for(int i = 0; i < t; i++)
        free(p[i]); 
    free(p); 
    return 0;
}
