
//Problem: 1051 (Taxes)
#include <stdio.h>

int main(void)
{
    double salary, taxes;
    scanf("%lf", &salary);

    if (salary >= 0.0 && salary <= 2000.00)
    {
        printf("Isento\n");
    }
    else if (salary > 2000.00 && salary <= 3000.00)
    {
        salary = salary - 2000.00;
        taxes = (salary * 8.00) / 100.00;
        printf("R$ %.2lf\n", taxes);
    }
    else if (salary > 3000.00 && salary <= 4500.00)
    {
        salary = salary - 2000.00;
        taxes = (((salary - 1000.00) * 18) / 100.0) + ((1000.0 * 8) / 100.0);
        printf("R$ %.2lf\n", taxes);
    }
    else if (salary > 4500.00)
    {
        salary = salary - 2000.00;
        taxes = (((salary - 2500.00) * 28) / 100) + ((1500.0 * 18) / 100.0) + ((1000.0 * 8) / 100.0);
        printf("R$ %.2lf\n", taxes);
    }

    return 0;
}



