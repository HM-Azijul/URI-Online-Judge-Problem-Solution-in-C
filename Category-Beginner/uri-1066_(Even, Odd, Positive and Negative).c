
//Problem: 1066 (Even, Odd, Positive and Negative)
#include <stdio.h>

int main(void)
{
    int i, number;
    int even = 0, odd = 0, positve = 0, negative = 0;

    for (i = 1; i <= 5; i++)
    {
        scanf("%d", &number);

        if (number % 2 == 0)
        {
            even++;
        }
        if (number % 2 != 0)
        {
            odd++;
        }
        if (number > 0)
        {
            positve++;
        }
        if (number < 0)
        {
            negative++;
        }
    }

    printf("%d valor(es) par(es)\n", even);
    printf("%d valor(es) impar(es)\n", odd);
    printf("%d valor(es) positivo(s)\n", positve);
    printf("%d valor(es) negativo(s)\n", negative);

    return 0;
}



