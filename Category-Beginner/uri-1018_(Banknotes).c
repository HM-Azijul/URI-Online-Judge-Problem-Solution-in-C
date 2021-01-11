//Problem: 1018 (Banknotes)
#include <stdio.h>
int main()
{
    int N;
    scanf("%d", &N);

    if (0 < N && N < 1000000)
    {
        printf("%d\n", N);

        // sum = N / 100;
        // printf("%d nota(s) de R$ 100,00\n", sum);
        printf("%d nota(s) de R$ 100,00\n", N / 100);
        N = N % 100;

        printf("%d nota(s) de R$ 50,00\n", N / 50);
        N = N % 50;

        printf("%d nota(s) de R$ 20,00\n", N / 20);
        N = N % 20;

        printf("%d nota(s) de R$ 10,00\n", N / 10);
        N = N % 10; //baki thake koto tk- seta ber hobe

        printf("%d nota(s) de R$ 5,00\n", N / 5);
        N = N % 5;

        printf("%d nota(s) de R$ 2,00\n", N / 2);
        N = N % 2;

        printf("%d nota(s) de R$ 1,00\n", N / 1);
    }
    else
    {
        printf("%d is wrong input range, Please input a valid range\n", N);
    }

    return 0;
}


