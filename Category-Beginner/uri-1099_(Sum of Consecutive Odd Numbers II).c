
//* Problem: 1099 (Sum of Consecutive Odd Numbers II)
#include <stdio.h>
int main(void)
{
    int N, x, y, temp, sum;
    scanf("%d", &N);

    while (N--)
    {
        sum = 0;

        scanf("%d %d", &x, &y);
        if (x > y)
        {
            temp = x;
            x = y;
            y = temp;
        }

        for (int i = x + 1; i < y; i++) //not including X and Y; So, x+1
        {
            if (i % 2 != 0)
            {
                sum = sum + i;
            }
        }

        printf("%d\n", sum);
    }

    return 0;
}

