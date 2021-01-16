
//Problem: 1048 (Salary Increase)
#include <stdio.h>
int main(void)
{
    double current_salary, new_salary, money_earned, in_percentage;
    scanf("%lf", &current_salary);

    if (current_salary >= 0.00 && current_salary <= 400.00)
    {
        in_percentage = 15.0;
        money_earned = ((current_salary * in_percentage) / 100.00);
        new_salary = current_salary + money_earned;

        printf("Novo salario: %.2lf\n", new_salary);
        printf("Reajuste ganho: %.2lf\n", money_earned);
        printf("Em percentual: %d %%\n", (int)in_percentage);
    }
    else if (current_salary >= 400.01 && current_salary <= 800.00)
    {
        in_percentage = 12.0;
        money_earned = ((current_salary * in_percentage) / 100.00);
        new_salary = current_salary + money_earned;

        printf("Novo salario: %.2lf\n", new_salary);
        printf("Reajuste ganho: %.2lf\n", money_earned);
        printf("Em percentual: %d %%\n", (int)in_percentage);
    }
    else if (current_salary >= 800.01 && current_salary <= 1200.00)
    {
        in_percentage = 10.0;
        money_earned = ((current_salary * in_percentage) / 100.00);
        new_salary = current_salary + money_earned;

        printf("Novo salario: %.2lf\n", new_salary);
        printf("Reajuste ganho: %.2lf\n", money_earned);
        printf("Em percentual: %d %%\n", (int)in_percentage);
    }
    else if (current_salary >= 1200.01 && current_salary <= 2000.00)
    {
        in_percentage = 7.0;
        money_earned = ((current_salary * in_percentage) / 100.00);
        new_salary = current_salary + money_earned;

        printf("Novo salario: %.2lf\n", new_salary);
        printf("Reajuste ganho: %.2lf\n", money_earned);
        printf("Em percentual: %d %%\n", (int)in_percentage);
    }
    else
    {
        in_percentage = 4.0;
        money_earned = ((current_salary * in_percentage) / 100.00);
        new_salary = current_salary + money_earned;

        printf("Novo salario: %.2lf\n", new_salary);
        printf("Reajuste ganho: %.2lf\n", money_earned);
        printf("Em percentual: %d %%\n", (int)in_percentage);
    }

    return 0;
}


