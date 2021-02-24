#include <stdio.h>
#include <string.h>

int contain(char* txt, char* pat);
            
int main() {
    char str[101];
	char cro[8][4] = { "c=", "c-", "dz=", "d-", "lj", "nj", "s=", "z=" };
	scanf("%s", str);
	int cnt = strlen(str), n, dz = 0; // "dz="의 개수

	for (int i = 0; i < 8; i++) {
		if (n = contain(str, cro[i])) {
			cnt = cnt - (strlen(cro[i]) * n) + n; 
            if(strcmp(cro[i], "dz=") == 0)
                dz = n;
        }
	}
    
    cnt += dz; 
	printf("%d\n", cnt);
    return 0;
}

int contain(char* txt, char* pat) {
	int pt = 0, pp = 0, num = 0; // 해당 pat가 중복되는 횟수 
	while (pt != strlen(txt)) {
		if (txt[pt] == pat[pp]) {
			pt++; pp++;
            if(pp == strlen(pat)) {
                num++; pp = 0; 
            }
		}
		else {
			pt = pt - pp + 1; pp = 0;
		}
	}
	return num; 
}
