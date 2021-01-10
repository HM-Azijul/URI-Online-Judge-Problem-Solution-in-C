//Problem: 1008 (Salary)
#include <stdio.h>
int main(void)
{
    int employee_number;
    float worked_hours_in_month, hourly_rate, salary;
    scanf("%d %f %f", &employee_number, &worked_hours_in_month, &hourly_rate);

    // salary = worked_hours_in_month * hourly_rate;

    printf("NUMBER = %d\nSALARY = U$ %.2f\n", employee_number, worked_hours_in_month * hourly_rate);

    return 0;
}

