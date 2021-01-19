
//Problem: 1061 (Event Time)
#include <stdio.h>
int main(void)
{
    int day_start, day_end, hour_start, hour_end, min_start, min_end, sec_start, sec_end;
    int convert_in_sec_start, convert_in_sec_end;
    int duration_second;

    scanf("%*s %d", &day_start);
    scanf("%d : %d : %d", &hour_start, &min_start, &sec_start);
    scanf("%*s %d", &day_end);
    scanf("%d : %d : %d", &hour_end, &min_end, &sec_end);

    convert_in_sec_start = sec_start + (min_start * 60) + (hour_start * (60 * 60)) + (day_start * (24 * 60 * 60));
    convert_in_sec_end = sec_end + (min_end * 60) + (hour_end * (60 * 60)) + (day_end * (24 * 60 * 60));
    duration_second = convert_in_sec_end - convert_in_sec_start;

    printf("%d dia(s)\n", duration_second / 86400); //24*60*60=86,400
    duration_second = duration_second % 86400;

    printf("%d hora(s)\n", duration_second / 3600);
    duration_second = duration_second % 3600;

    printf("%d minuto(s)\n", duration_second / 60);
    duration_second = duration_second % 60;

    printf("%d segundo(s)\n", duration_second);

    return 0;
}



