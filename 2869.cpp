#include <stdio.h>

int main() {
    int up, down, height, days;
	scanf("%d %d %d", &up, &down, &height);
	height -= up;
	days = height / (up - down);
	if (height % (up - down))
		days++;
	printf("%d\n", days + 1);
    return 0;
}
