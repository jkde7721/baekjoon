#include <stdio.h>
#include <string.h>
#define MAX 10001
#define OFFSET 48 
int main() {
    char num1[MAX + 1], num2[MAX];
	int idx1, idx2, idx3, sum, flag = 0;
	scanf("%s %s", num1, num2);
	idx1 = strlen(num1) - 1; idx2 = strlen(num2) - 1;
	idx3 = (idx1 >= idx2 ? idx1 : idx2) + 2; 
	num1[idx3--] = NULL; 

	while (idx1 >= 0 || idx2 >= 0) {
		if(idx1 < 0) sum = num2[idx2--] - '0' + flag;
		else if(idx2 < 0) sum = num1[idx1--] - '0' + flag;
		else sum = num1[idx1--] - '0' + num2[idx2--] - '0' + flag;
		
		if (sum >= 10) {
			flag = 1; sum -= 10;
		}
		else flag = 0; 
		num1[idx3--] = sum + OFFSET;
	}
	num1[idx3] = flag + OFFSET;  
	printf("%s\n", flag ? num1 : &num1[1]);  
    return 0;
}
