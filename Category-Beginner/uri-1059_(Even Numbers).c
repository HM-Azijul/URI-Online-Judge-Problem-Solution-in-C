
//Problem: 1059 (Even Numbers)
#include <stdio.h>
int main(void)
{
    int number;

    for (number = 1; number <= 100; number++)
    {
        if (number % 2 == 0)
        {
            printf("%d\n", number);
        }
    }

    return 0;
}


