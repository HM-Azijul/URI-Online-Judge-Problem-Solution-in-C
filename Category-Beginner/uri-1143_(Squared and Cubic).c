
//* Problem: 1143 (Squared and Cubic)
#include <stdio.h>
int main(void)
{
    int N, i;

    scanf("%d", &N);

    for (i = 1; i <= N; i++)
    {
        printf("%d %d %d\n", i, i * i, i * i * i);
    }

    return 0;
}

