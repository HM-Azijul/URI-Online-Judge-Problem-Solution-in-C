
//Problem: 1020 (Age in Days)
#include <stdio.h>
int main()
{
    int years, months, days;
    scanf("%d", &days);

    years = (days / 365); //365 dia vag kore bocor ber korlam
    days = (days % 365);  //bocor ber korar por koto din thake ,ta janlam
    months = days / 30;   //jtodin thake, sei din ke 30 dia vag kore , month e convart korlam
    days = (days % 30);   //month e convart korar por - r koto din obosisto thake ta ber korlam

    printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n", years, months, days);

    return 0;
}


