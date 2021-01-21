
//* Problem: 1080 (Highest and Position)
#include <stdio.h>
int main()
{
    int i, input, poition, max = 0;
    for (i = 1; i <= 100; i++)
    {
        scanf("%d", &input);

        if (input > max)
        {
            max = input;
            poition = i;
        }
    }

    printf("%d\n%d\n", max, poition);

    return 0;
}
