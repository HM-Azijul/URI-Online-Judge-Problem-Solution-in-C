
//Problem: 1046 (Game Time)
#include <stdio.h>
int main(void)
{
    int start_time, end_time;
    scanf("%d %d", &start_time, &end_time);

    if (start_time == end_time)
    {
        printf("O JOGO DUROU 24 HORA(S)\n");
    }
    else if (start_time > end_time)
    {
        printf("O JOGO DUROU %d HORA(S)\n", (end_time + 24) - start_time); //24 hour = 1 day
    }
    else if (end_time > start_time)
    {
        printf("O JOGO DUROU %d HORA(S)\n", end_time - start_time);
    }

    return 0;
}



