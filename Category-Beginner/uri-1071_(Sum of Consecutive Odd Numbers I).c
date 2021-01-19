
//Problem: 1071 (Sum of Consecutive Odd Numbers I)
#include <stdio.h>

int main(void)
{
    int x, y, i, temp, n, sum = 0;
    scanf("%d %d", &x, &y);

    if (x > y)
    {
        temp = x;
        x = y;
        y = temp;
    }

    if (x % 2 == 0)
    {
        n = x + 1;
    }
    else
    {
        n = x + 2;
    }

    for (i = n; i < y; i += 2)
    {
        sum += i;
    }

    printf("%d\n", sum);

    return 0;
}


