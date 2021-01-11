//Problem: 1017 (Fuel Spent)
#include <stdio.h>
int main()
{
    int spent_time, average_speed, car_milege;
    double fuel_spent;
    scanf("%d %d", &spent_time, &average_speed);

    car_milege = 12;
    fuel_spent = (((double)spent_time * (double)average_speed) / (double)car_milege);

    printf("%.3lf\n", fuel_spent);

    return 0;
}


