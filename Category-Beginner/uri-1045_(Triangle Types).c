
//Problem: 1045 (Triangle Types)
#include <stdio.h>
int main(void)
{
    double a, b, c, large, medium, small;
    scanf("%lf %lf %lf", &a, &b, &c);
    // section 1
    if (a >= b && a >= c)
    {
        large = a;
        if (b >= c)
        {
            medium = b;
            small = c;
        }
        else
        {
            medium = c;
            small = b;
        }
    }
    else if (b >= a && b >= c)
    {
        large = b;
        if (a >= c)
        {
            medium = a;
            small = c;
        }
        else
        {
            medium = c;
            small = a;
        }
    }
    else if (c >= a && c >= b)
    {
        large = c;
        if (a >= b)
        {
            medium = a;
            small = b;
        }
        else
        {
            medium = b;
            small = a;
        }
    }
    //printf("%lf %lf %lf\n",large, medium, small);

    //section 2
    if (large >= medium + small)
    {
        printf("NAO FORMA TRIANGULO\n");
    }
    else
    {
        if ((large * large) == ((medium * medium) + (small * small)))
        {
            printf("TRIANGULO RETANGULO\n");
        }
        else if ((large * large) > ((medium * medium) + (small * small)))
        {
            printf("TRIANGULO OBTUSANGULO\n");
        }
        else if ((large * large) < ((medium * medium) + (small * small)))
        {
            printf("TRIANGULO ACUTANGULO\n");
        }
    }

    // section -3
    if (large == medium && medium == small)
    {
        printf("TRIANGULO EQUILATERO\n");
    }
    else if ((large == medium && medium != small) || (medium == small && medium != large))
    //in descanding order large != small ; Cz,then 3 will be same that not possible
    {
        printf("TRIANGULO ISOSCELES\n");
    }

    return 0;
}


