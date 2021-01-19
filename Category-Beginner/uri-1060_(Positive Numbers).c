
//Problem: 1060 (Positive Numbers)
#include <stdio.h>
int main(void)
{
    int i, n = 0;
    float a;

    for (i = 0; i < 6; i++)
    {
        scanf("%f\n", &a);

        if (a >= 0)
        {
            n++;
        }
    }
    printf("%d valores positivos\n", n);

    return 0;
}


