#include<stdio.h>
int main()
{
    int n,r,sum=0;
    printf("enter number = ");
    scanf("%d",&n);

    while(n>0)
    {
        r=n%5;
        sum=sum+r;
        n=n/10;
    }
    printf("sum od digits =%d",sum);
    return 0;
}