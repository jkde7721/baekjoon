#include <stdio.h>
#include <math.h>
int main() {
    int t, num;
    double x1, y1, r1, x2, y2, r2;
    scanf("%d", &t);
    for(; t > 0; t--) {
        scanf("%lf %lf %lf %lf %lf %lf", &x1, &y1, &r1, &x2, &y2, &r2);
        double dis = sqrt(pow(x1 - x2, 2) + pow(y2 - y1, 2));
        if(dis == 0 && r1 == r2) num = -1;
        else if(dis == fabs(r1 - r2) || dis == r1 + r2) num = 1;
        else if(dis > fabs(r1 - r2) && dis < r1 + r2) num = 2;
        else num = 0; 
        printf("%d\n", num); 
    }
    return 0;
}
