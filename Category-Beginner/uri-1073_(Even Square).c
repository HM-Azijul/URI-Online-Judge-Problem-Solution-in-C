
//Problem: 1073 (Even Square)
#include <stdio.h>
int main(void)
{
    int num, i;
    scanf("%d", &num);

    for (i = 1; i <= num; i++)
    {
        if (i % 2 == 0)
        {
            printf("%d^2 = %d\n", i, i * i);
        }
    }

    return 0;
}

