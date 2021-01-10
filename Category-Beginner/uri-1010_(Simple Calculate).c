//Problem: 1010 (Simple Calculate)
#include <stdio.h>
int main()
{
    int product_code_1, product_units_1, product_code_2, product_units_2;
    double product_price_1, product_price_2, paid_amount;

    scanf("%d %d %lf", &product_code_1, &product_units_1, &product_price_1);
    scanf("%d %d %lf", &product_code_2, &product_units_2, &product_price_2);

    paid_amount = (((double)product_units_1 * product_price_1) + ((double)product_units_2 * product_price_2));

    printf("VALOR A PAGAR: R$ %.2lf\n", paid_amount);

    // printf("%lf", (double)product_units_1);

    return 0;
}


