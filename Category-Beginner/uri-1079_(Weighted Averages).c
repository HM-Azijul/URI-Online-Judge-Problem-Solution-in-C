
//* Problem: 1079 (Weighted Averages)
#include <stdio.h>
int main()
{
    int n, i;
    double a, b, c, total;
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        scanf("%lf %lf %lf", &a, &b, &c);
        total = (a * 2.0) + (b * 3.0) + (c * 5.0);
        printf("%.1lf\n", (total / 10.0));
    }

    return 0;
}

