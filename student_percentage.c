// student marks and percentage.
#include <stdio.h>
int main()
{
    int acc, stat, eco, bank, env, total;
    float m, avg;
    printf("enter the maks of account:=");
    scanf("%d", &acc);
    printf("enter yor ,marks of atat:=");
    scanf("%d", &stat);
    printf("enter marks of economi:=");
    scanf("%d", &eco);
    printf("entern your marks of banking:=");
    scanf("%d", &bank);
    printf("enter your marks of envorenment");
    scanf("%d", &env);
    total = acc + stat + eco + bank + env;
    printf("\n total marks =%d", total);
    avg = total / 5;
    m(total * 100) / 500;
    printf("\n average =%.2f", avg);
    printf("\n percentange =%.2f", m);
    if (m > 100)
    {
        printf("\n you are invalid nimber\n ");
    }
    else if (m >= 90 && m <= 100)
    {
        printf("\n your grade is A+");
    }
    else if (m >= 80 && m <= 90)
    {
        printf("\n your garade is B+");
    }
    else if (m >= 70 && m <= 80)
    {
        printf("\n your grade is B");
    }
    else if (m >= 70 && m <= 55)
    {
        printf("\n your grade is C");
    }
    else if (m >= 0 && m <= 55)
    {
        printf("\n you are failed try again");
    }
    else
    {
        printf("sorry enter valide number ");
    }
    return 0;
}