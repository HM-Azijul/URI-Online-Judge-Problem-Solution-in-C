
//* Problem: 1131 (Grenais)
#include <stdio.h>
int main(void)
{
    int Inter = 0, Gremio = 0, Draw = 0, test = 0;
    int I, G, loopBreaker;

    while (1)
    {
        scanf("%d %d", &I, &G);

        if (I == G)
            Draw++;
        else if (I < G)
            Gremio++;
        else
            Inter++;

        printf("Novo grenal (1-sim 2-nao)\n");
        test++;

        scanf("%d", &loopBreaker);
        if (loopBreaker == 1)
            continue;
        else
            break;
    }

    printf("%d grenais\n", test);
    printf("Inter:%d\n", Inter);
    printf("Gremio:%d\n", Gremio);
    printf("Empates:%d\n", Draw);

    if (Inter > Gremio)
        printf("Inter venceu mais\n");
    else if (Gremio > Inter)
        printf("Gremio venceu mais\n");
    else
        printf("Não houve vencedor\n");

    return 0;
}


