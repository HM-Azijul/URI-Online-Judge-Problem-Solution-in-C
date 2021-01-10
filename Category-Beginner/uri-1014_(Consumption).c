//Problem: 1014 (Consumption)
#include <stdio.h>
int main()
{
    int travel_distance;
    double fuel_spent, average_consumption;

    scanf("%d", &travel_distance);
    scanf("%lf", &fuel_spent);

    average_consumption = ((double)travel_distance / fuel_spent);

    printf("%.3lf km/l\n", average_consumption);
    return 0;
}


