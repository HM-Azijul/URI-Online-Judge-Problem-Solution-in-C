
//* Problem: 1078 (Multiplication Table)
#include <stdio.h>
int main(void)
{
    int n, i;
    scanf("%d", &n);

    if (n >= 2 && n <= 1000)
    {
        for (i = 1; i <= 10; i++)
        {
            printf("%d x %d = %d\n", i, n, i * n);
        }
    }
    else
    {
        printf("Your input range (2 < N < 1000)\n");
    }

    return 0;
}

