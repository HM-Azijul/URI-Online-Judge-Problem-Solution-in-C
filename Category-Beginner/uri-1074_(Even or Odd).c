
//Problem: 1074 (Even or Odd)
#include <stdio.h>

int main()
{
    int test_case, x, i;
    scanf("%d", &test_case);

    for (i = 1; i <= test_case; i++)
    {
        scanf("%d", &x);

        if (x < 0)
        {
            if (x % 2 == 0)
            {
                printf("EVEN NEGATIVE\n");
            }
            else
            {
                printf("ODD NEGATIVE\n");
            }
        }

        else if (x > 0)
        {
            if (x % 2 == 0)
            {
                printf("EVEN POSITIVE\n");
            }
            else
            {
                printf("ODD POSITIVE\n");
            }
        }
        else if (x == 0)
        {
            printf("NULL\n");
        }
    }

    return 0;
}


