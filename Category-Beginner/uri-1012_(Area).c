//Problem: 1012 (Area)
#include <stdio.h>
int main()
{
    double A, B, C, pi, area_triangle, area_circle, area_trapezium, area_square, area_rectangle;

    scanf("%lf %lf %lf", &A, &B, &C);

    pi = 3.14159;
    area_triangle = ((1.0 / 2.0) * (A * C));
    area_circle = pi * (C * C);
    area_trapezium = ((A + B) / 2.0 * C);
    area_square = B * B;
    area_rectangle = A * B;

    printf("TRIANGULO: %.3lf\n", area_triangle);
    printf("CIRCULO: %.3f\n", area_circle);
    printf("TRAPEZIO: %.3f\n", area_trapezium);
    printf("QUADRADO: %.3f\n", area_square);
    printf("RETANGULO: %.3f\n", area_rectangle);

    return 0;
}


