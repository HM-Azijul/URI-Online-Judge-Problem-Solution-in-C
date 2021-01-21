
//* Problem: 1113 (Ascending and Descending)
#include <stdio.h>
int main(void)
{
    int X, Y;

    while (1)
    {
        scanf("%d %d", &X, &Y);

        if (X == Y)
            break;

        if (X < Y)
        {
            printf("Crescente\n");
        }
        else
        {
            printf("Decrescente\n");
        }
    }

    return 0;
}


