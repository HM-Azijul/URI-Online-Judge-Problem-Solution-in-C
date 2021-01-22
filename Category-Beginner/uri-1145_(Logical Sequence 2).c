
//* Problem: 1145 (Logical Sequence 2)
#include <stdio.h>
int main(void)
{
    int X, Y;
    scanf("%d %d", &X, &Y);

    for (int i = 1; i <= Y; i += X)
    {
        for (int j = i; j < i + X; j++)
        {
            if (j == Y)
            {
                printf("%d", j);
                break;
            }
            else if (j % X == 0)
            {
                printf("%d", j);
            }
            else
            {
                printf("%d ", j);
            }
        } //second for loop end (use count 1 2 3)

        printf("\n");
    } // first for loop end (use count row 1 4 7)

    return 0;
}

//! or anotherway solution
#include <stdio.h>
int main(void)
{
    int x, y, i = 1, j = 0;
    scanf("%d %d", &x, &y); //* x=3 y=9

    if (x < y)
    {
        if (x < y && 1 < x < 20 && x < y < 100000)
        {
            while (i <= y)
            {
                j++;
                if (x > j) //* 1 2 3
                           //* 4 5 6
                {
                    printf("%d ", i);
                }

                if (x == j)
                {
                    printf("%d\n", i);
                    j = 0;
                }

                i++;
            }
        }
    }
    else
    {
        printf("input correct value (x<y)\n");
    }

    return 0;
}

