//even number or not.
#include<stdio.h>
int main()
{
    int i,num,sum=0;
    printf("enter the limit =");
    scanf("%d",&num);
    printf("even number frome 1 to %d are:\n",num);
    for(int i=1; i<=num; i++)
    {
        if(i%2==0)
        {
            printf("%d\n",i);
            sum=sum+i;
        }
    }
    printf("sum of even number from 1 to %d is:%d\n",num,sum);
    return 0;

}