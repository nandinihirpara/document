#include<stdio.h>
int recursionfact(int n)
{
    if(n==0)
    {
        return 1;
    }
    else
    return n*recursionfact(n-1);
}
int main()
{
    int num;
    printf("enter the number:");
    scanf("%d",&num);
    printf("factorial of no %d is =%d",num,recursionfact(num));
    return 0;
}
