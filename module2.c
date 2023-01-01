#include<stdio.h>
#include<math.h>
int main()
//program of simple and compund intreset.
{
    float o,p,q,si,compund;
    printf("enter your amount of  intrest=");
    scanf("%f"&o);
    printf("enter your rate for intrest=");
    scanf("%f",&p);
    printf("enter your time in year=");
    scanf("%f",&q);
    si=o*p*q/100;
    compund=o*(pow(1+p/100,q)-1);
    printf("simple intrest of %3f\n",si);
    printf("compunde intrest of %0.2f\n",compund);
    return 0;
}