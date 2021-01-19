
//Problem: 1072 (Interval 2)
#include <stdio.h>
int main(void)
{
    int n, x, interval_in = 0, intervel_out = 0, i;
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        scanf("%d", &x);

        if (x >= 10 && x <= 20)
        {
            interval_in++;
        }
        else
        {
            intervel_out++;
        }
    }
    printf("%d in\n", interval_in);
    printf("%d out\n", intervel_out);

    return 0;
}

