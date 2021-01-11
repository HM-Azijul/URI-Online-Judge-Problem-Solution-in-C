
//Problem: 1038 (Snack)
#include <stdio.h>
int main()
{
    int product_code, product_quantity;
    double total_price;
    scanf("%d %d", &product_code, &product_quantity);

    if (product_code == 1)
    {
        total_price = (product_quantity * 4.00);
        printf("Total: R$ %.2lf\n", total_price);
    }
    else if (product_code == 2)
    {
        total_price = (product_quantity * 4.50);
        printf("Total: R$ %.2lf\n", total_price);
    }
    else if (product_code == 3)
    {
        total_price = (product_quantity * 5.00);
        printf("Total: R$ %.2lf\n", total_price);
    }
    else if (product_code == 4)
    {
        total_price = (product_quantity * 2.00);
        printf("Total: R$ %.2lf\n", total_price);
    }
    else if (product_code == 5)
    {
        total_price = (product_quantity * 1.50);
        printf("Total: R$ %.2lf\n", total_price);
    }
    else
    {
        printf("Input Wrong Product Code!!");
    }

    return 0;
}


