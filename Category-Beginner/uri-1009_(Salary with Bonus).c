//Problem: 1009 (Salary with Bonus)

/* note:If you have to turn a percentage into a decimal, just divide by 100. For example, 25% = 25/100 = 0.25. 
To change a decimal into a percentage, multiply by 100. So 0.3 = 0.3 × 100 =30%.*/
#include <stdio.h>
int main()
{
    char name[100];
    double seller_salary, total_value_sold, final_salary;

    // fgets(name, 100, stdin);
    scanf("%s", &name);
    scanf(" %lf %lf", &seller_salary, &total_value_sold);

    final_salary = seller_salary + ((total_value_sold * 15) / 100);

    printf("TOTAL = R$ %.2lf\n", final_salary);

    return 0;
}


