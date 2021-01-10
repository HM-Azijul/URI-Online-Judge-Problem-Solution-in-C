//Problem: 1013 (The Greatest)
#include <stdio.h>
int main()
{
    int a, b, c;

    scanf("%d %d %d", &a, &b, &c);

    if (a >= b)
    {
        if (a > c)
        {
            printf("%d eh o maior\n", a);
        }
        else if (c > a)
        {
            printf("%d eh o maior\n", c);
        }
    }

    else if (b >= a)
    {
        if (b > c)
        {
            printf("%d eh o maior\n", b);
        }
        else if (c > b)
        {
            printf("%d eh o maior\n", c);
        }
    }

    return 0;
}


