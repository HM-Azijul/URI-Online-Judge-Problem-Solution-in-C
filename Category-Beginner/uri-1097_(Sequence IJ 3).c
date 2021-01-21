
//* Problem: 1097 (Sequence IJ 3)
#include <stdio.h>
int main(void)
{
    int i, j;

    for (i = 1; i <= 9; i += 2)
    {
        for (j = 0; j < 3; j--)
        {
            printf("I=%d J=%d\n", i, j);
            j += 2;
        }
    }

    return 0;
}

//or

#include <stdio.h>
int main(void)
{
    int I, J, Q = 7;

    for (I = 1; I <= 9; I += 2)
    {
        for (J = 0; J < 3; J++)
        {
            printf("I=%d J=%d\n", I, Q);
            Q--;
        }
        Q = Q + 5; //after 3 time loop Q value now 4; So add 5
    }
}

