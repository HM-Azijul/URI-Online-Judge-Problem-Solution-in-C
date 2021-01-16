
//Problem: 1047 (Game Time with Minutes)
#include <stdio.h>
int main()
{
    int initial_hour, final_hour, initial_minute, final_minute;
    int duration_hour, duration_min;

    scanf("%d %d %d %d", &initial_hour, &initial_minute, &final_hour, &final_minute);
    duration_min = final_minute - initial_minute;

    if (duration_min < 0)
    {
        duration_min += 60;
        final_hour -= 1;

        if (final_hour < initial_hour)
        {
            final_hour += 24;
            duration_hour = (final_hour - initial_hour);
        }
        else
        {
            duration_hour = (final_hour - initial_hour);
        }
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", duration_hour, duration_min);
    }
    else if (duration_min > 0)
    {
        if (final_hour < initial_hour)
        {
            final_hour += 24;
            duration_hour = (final_hour - initial_hour);
        }
        else
        {
            duration_hour = (final_hour - initial_hour);
        }
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", duration_hour, duration_min);
    }
    else if (initial_hour == final_hour && initial_minute == final_minute)
    {
        printf("O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)\n");
    }

    return 0;
}


