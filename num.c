#include <stdio.h>
// find max number in given num.
int main()
{
    int i = 0, max = 0, n = 0, num[100];
    printf("please enter the value of number A:=");
    scanf("%d", &n);
    for (i; i < n; i++)
    {
        printf("\n please enter the value of %d:", i + 1);
        scanf("%d", &num[i]);
    }
    max = num[0];
    printf("\n  you have to enter following velue:=");
    for (i = 0; i < n; i++)
    {
        printf("%d", num[i]);
    }
    for (i = 1; i < n; i++)
    {
        if (max < num[i])
        {
            max = num[i];
        }
    }
    printf("\n maximum value is:=", max);
    return 0;
}