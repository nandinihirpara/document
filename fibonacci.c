// fibonacci program.
#include <stdio.h>
int main()
{
    int first = 0, second = 1, result, k, no;
    printf("enter number of terms:");
    scanf("%d", &no);
    printf("first %d terms of fibonacci series:=", no);
    for (k = 0; k < no; k++)
    {
        if (k <= 1)
        {
            result = k;
        }
        else
        {
            result = first + second;
            first = result;
        }
        printf("%d", result);
    }
    return 0;
}