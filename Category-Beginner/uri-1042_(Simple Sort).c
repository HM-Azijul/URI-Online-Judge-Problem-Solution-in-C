
//Problem: 1042 (Simple Sort)
#include <stdio.h>
int main(void)
{
    int a, b, c, large, medium, small, i, j, k;
    scanf("%d %d %d", &a, &b, &c);

    i = a;
    j = b;
    k = c;

    if (a >= b && a >= c)
    {
        large = a;
        if (b >= c)
        {
            medium = b;
            small = c;
        }
        else
        {
            medium = c;
            small = b;
        }
    }
    else if (b >= a && b >= c)
    {
        large = b;
        if (a >= c)
        {
            medium = a;
            small = c;
        }
        else
        {
            medium = c;
            small = a;
        }
    }
    else if (c >= a && c >= b)
    {
        large = c;
        if (a >= b)
        {
            medium = a;
            small = b;
        }
        else
        {
            medium = b;
            small = a;
        }
    }

    printf("%d\n%d\n%d\n", small, medium, large);
    printf("\n");
    printf("%d\n%d\n%d\n", i, j, k);

    return 0;
}


