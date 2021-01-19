
//Problem: 1064 (Positives and Average)
#include <stdio.h>
int main(void)
{
    int i, positive_counter = 0;
    double number, avg, positive_value = 0;

    for (i = 0; i < 6; i++)
    {
        scanf("%lf", &number);

        if (number > 0)
        {
            positive_value = number + positive_value; //jei number ta poitive tar jog kortece
            positive_counter++;                       //koyta postive value vitore duktece sei hisab kore
        }
    }
    avg = positive_value / positive_counter;

    printf("%d valores positivos\n", positive_counter);
    printf("%.1lf\n", avg);

    return 0;
}





