
//* Problem: 1114 (Fixed Password)
#include <stdio.h>
int main(void)
{
    int password;

    while (1)
    {
        scanf("%d", &password);

        if (password == 2002)
        {
            printf("Acesso Permitido\n");
            break;
        }
        else
        {
            printf("Senha Invalida\n");
        }
    }

    return 0;
}


