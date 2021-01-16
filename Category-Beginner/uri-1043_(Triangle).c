
//Problem: 1043 (Triangle)

//trivuz er jkno 2ta bahur jogfol - 3rd bahu opekkha boro hole ,trivuz bananno somvob
#include <stdio.h>
int main(void)
{
    double a, b, c, triangle_perimeter, trapezium_area;
    scanf("%lf %lf %lf", &a, &b, &c);

    if (a + b > c && b + c > a && c + a > b)
    {
        triangle_perimeter = a + b + c;
        printf("Perimetro = %.1lf\n", triangle_perimeter);
    }
    else
    {
        trapezium_area = ((a + b) * c) / 2.0;
        printf("Area = %.1lf\n", trapezium_area);
    }

    return 0;
}



