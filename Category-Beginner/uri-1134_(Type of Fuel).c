
//* Problem: 1134 (Type of Fuel)
#include <stdio.h>
int main(void)
{
    int n;
    int alcohol = 0, gasoline = 0, diesel = 0;

    while (1)
    {
        scanf("%d", &n);

        if (n > 0 && n <= 4)
        {
            if (n == 1)
            {
                alcohol++;
            }
            else if (n == 2)
            {
                gasoline++;
            }
            else if (n == 3)
            {
                diesel++;
            }
            else if (n == 4)
            {
                break;
            }
        }
        else
        {
            continue;
        }
    }

    printf("MUITO OBRIGADO\n");
    printf("Alcool: %d\n", alcohol);
    printf("Gasolina: %d\n", gasoline);
    printf("Diesel: %d\n", diesel);

    return 0;
}

//! Problem 1134 (Type of Fuel) (try to use switch statement)
#include <stdio.h>
int main(void)
{
    int n, flag = 0;
    int alcohol = 0, gasoline = 0, diesel = 0;

    while (1)
    {
        scanf("%d", &n);

        if (n > 0 && n <= 4)
        {
            switch (n)
            {
            case 1:
                alcohol++;
                break;
            case 2:
                gasoline++;
                break;
            case 3:
                diesel++;
                break;
            default:
                flag = 1;
            }
        }
        else
        {
            continue;
        }

        if (flag)
        {
            break;
        }
    }

    printf("MUITO OBRIGADO\n");
    printf("Alcool: %d\n", alcohol);
    printf("Gasolina: %d\n", gasoline);
    printf("Diesel: %d\n", diesel);

    return 0;
}

