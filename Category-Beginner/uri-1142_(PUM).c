
//* Problem: 1142 (PUM)
#include <stdio.h>
int main(void)
{
    int N, a = 1;
    scanf("%d", &N);

    while (N--)
    {
        for (int i = 1; i <= 3; i++)
        {
            printf("%d ", a++);
        }
        printf("PUM\n");
        a += 1;
    }

    return 0;
}

