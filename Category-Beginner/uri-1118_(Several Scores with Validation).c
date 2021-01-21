
//* Problem: 1118 (Several Scores with Validation)
#include <stdio.h>
int main(void)
{
    int counter, y;
    double x, avg, sum;

    while (1)
    {
        counter = 0;
        sum = 0;

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

        //2nd part
        while (1)
        {
            printf("novo calculo (1-sim 2-nao)\n");
            scanf("%d", &y);

            if (y == 1 || y == 2)
            {
                break;
            }
        }
        if (y == 1)
        {
            continue;
        }
        else
        {
            break;
        }
    }

    return 0;
}


