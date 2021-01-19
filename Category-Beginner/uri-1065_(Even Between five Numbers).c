
//Problem: 1065 (Even Between five Numbers)
#include <stdio.h>
int main(void)
{
    int i, number, counter = 0;

    for (i = 0; i < 5; i++)
    {
        scanf("%d", &number);

        if (number % 2 == 0)
        {
            counter++;
        }
    }
    printf("%d valores pares\n", counter);

    return 0;
}






