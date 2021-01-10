//Problem: 1011 (Sphere)
#include <stdio.h>
int main()
{
    float R;
    double sphere_volume;

    scanf("%f", &R);
    sphere_volume = ((4.0 / 3) * 3.14159 * (R * R * R));
    printf("VOLUME = %.3lf\n", sphere_volume);

    // printf("%f\n", pi);

    return 0;
}



