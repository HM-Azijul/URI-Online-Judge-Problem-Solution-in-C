
//Problem: 1040 (Average 3)
#include <stdio.h>
int main()
{
    double n1, n2, n3, n4, weight_avg, exam_score, recalculate_avg;
    scanf("%lf %lf %lf %lf", &n1, &n2, &n3, &n4);

    weight_avg = (((n1 * 2.0) + (n2 * 3.0) + (n3 * 4.0) + (n4 * 1.0)) / (2.0 + 3.0 + 4.0 + 1.0));

    printf("Media: %.1lf\n", weight_avg);
    if (weight_avg >= 7.0)
    {
        printf("Aluno aprovado.\n");
    }
    else if (weight_avg < 5.0)
    {
        printf("Aluno reprovado.\n");
    }
    else if (weight_avg >= 5.0 && weight_avg < 6.9)
    {
        printf("Aluno em exame.\n");

        scanf("%lf", &exam_score);
        printf("Nota do exame: %.1lf\n", exam_score);

        recalculate_avg = ((weight_avg + exam_score) / 2.0);

        if (recalculate_avg >= 5.0)
        {
            printf("Aluno aprovado.\n");
        }
        else if (recalculate_avg <= 4.9)
        {
            printf("Aluno reprovado.\n");
        }

        printf("Media final: %.1lf\n", recalculate_avg);
    }

    return 0;
}



