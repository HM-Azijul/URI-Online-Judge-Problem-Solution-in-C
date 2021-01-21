
//* Problem: 1117 (Score Validation)
#include <stdio.h>
int main(void)
{
    int counter = 0;
    double x, avg, sum = 0;

    while (counter < 2)
    {
        scanf("%lf", &x);

        if (x >= 0 && x <= 10.0)
        {
            sum = sum + x;
            counter++;
        }
        else
        {
            printf("nota invalida\n");
        }
    }

    avg = sum / 2.0;
    printf("media = %.2lf\n", avg);

    return 0;
}


