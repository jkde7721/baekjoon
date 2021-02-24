#include <stdio.h>
int main() {
    int kg, n, num;
	scanf("%d", &kg);
	n = kg % 5; num = kg / 5;
	num = n == 0 ? num : n == 1 || n == 3 ? num + 1 : n == 2 && kg >= 12 || n == 4 && kg >= 9 ? num + 2 : -1;
	printf("%d\n", num);
    return 0;
}
