
//* Problem: 1101 (Sequence of Numbers and Sum)
#include <stdio.h>
int main(void)
{
    while (1)
    {
        int M, N, temp, sum = 0;

        scanf("%d", &M);
        scanf("%d", &N);

        if (M <= 0 || N <= 0)
        {
            break;
        }

        if (M > N)
        {
            temp = M;
            M = N;
            N = temp;
        }

        for (int i = M; i <= N; i++)
        {
            printf("%d ", i);
            sum = sum + i;
        }

        printf("Sum=%d\n", sum);
    }

    return 0;
}

