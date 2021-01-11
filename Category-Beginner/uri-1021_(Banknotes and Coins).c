
//Problem: 1021 (Banknotes and Coins)
#include <stdio.h>
int main()
{
    double N;
    int value;

    scanf("%lf", &N);
    value = N * 100; // 1 tk = 100poisa

    if (0 <= N && N <= 1000000.00)
    {
        printf("NOTAS:\n");

        printf("%d nota(s) de R$ 100.00\n", value / (100 * 100)); //100tk ke 100 dia gun kora poisa te convert kotci. 100tk = 100 coin.

        value %= (100 * 100); //value = value % (100 * 100);

        printf("%d nota(s) de R$ 50.00\n", value / (50 * 100));
        value = value % (50 * 100);

        printf("%d nota(s) de R$ 20.00\n", value / (20 * 100));
        value = value % (20 * 100);

        printf("%d nota(s) de R$ 10.00\n", value / (10 * 100));
        value = value % (10 * 100);

        printf("%d nota(s) de R$ 5.00\n", value / (5 * 100));
        value = value % (5 * 100);

        printf("%d nota(s) de R$ 2.00\n", value / (2 * 100));
        value = value % (2 * 100);

        // coins er hisab suru
        printf("MOEDAS:\n");

        printf("%d moeda(s) de R$ 1.00\n", value / (1 * 100));
        value = value % (1 * 100);

        printf("%d moeda(s) de R$ 0.50\n", value / (50)); //100 * 0.50 = 50
        value = value % (50);

        printf("%d moeda(s) de R$ 0.25\n", value / (25)); //100 * 0.25 = 25
        value = value % (25);

        printf("%d moeda(s) de R$ 0.10\n", value / (10)); //100 * 0.10 = 10
        value = value % (10);

        printf("%d moeda(s) de R$ 0.05\n", value / (5)); //100 * 0.05 = 5
        value = value % (5);

        printf("%d moeda(s) de R$ 0.01\n", value / (1)); //100 * 0.01 = 1
    }
    else
    {
        printf("%d is wrong input range, Please input a valid range\n", N);
    }

    return 0;
}

// Problem 1021 - alternative
#include <stdio.h>
int main()
{
    double input;
    int n;
    scanf("%lf", &input);
    n = input * 100;
    printf("NOTAS:\n");
    printf("%d nota(s) de R$ 100.00\n", n / 10000);
    n %= 10000;
    printf("%d nota(s) de R$ 50.00\n", n / 5000);
    n %= 5000;
    printf("%d nota(s) de R$ 20.00\n", n / 2000);
    n %= 2000;
    printf("%d nota(s) de R$ 10.00\n", n / 1000);
    n %= 1000;
    printf("%d nota(s) de R$ 5.00\n", n / 500);
    n %= 500;
    printf("%d nota(s) de R$ 2.00\n", n / 200);
    n %= 200;
    printf("MOEDAS:\n");
    printf("%d moeda(s) de R$ 1.00\n", n / 100);
    n %= 100;
    printf("%d moeda(s) de R$ 0.50\n", n / 50);
    n %= 50;
    printf("%d moeda(s) de R$ 0.25\n", n / 25);
    n %= 25;
    printf("%d moeda(s) de R$ 0.10\n", n / 10);
    n %= 10;
    printf("%d moeda(s) de R$ 0.05\n", n / 5);
    n %= 5;
    printf("%d moeda(s) de R$ 0.01\n", n);
    return 0;
}


