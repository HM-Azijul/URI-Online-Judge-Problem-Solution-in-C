
//Problem: 1019 (Time Conversion)
#include <stdio.h>
int main(void)
{
    int N, hours, minutes, seconds;
    //here N is second value
    scanf("%d", &N);

    // hours = (N / 3600);
    // minutes = (N % 3600);
    // minutes = (minutes / 60);
    // seconds = ((N % 3600) % 60);

    hours = (N / 3600);
    minutes = (N % 3600) / 60;
    seconds = (N % 60);

    printf("%d:%d:%d\n", hours, minutes, seconds);

    return 0;
}



