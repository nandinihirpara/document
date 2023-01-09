// max_number given arry using function.c
#include <stdio.h>
int main()
{
    int a[20], h, y, n;
    printf("enter your number H:=");
    scanf("%d", &h);
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);
    y = max(a, h);
    // function calling.
    printf("\n maximum=%d", y);
    return 0;
}
int max(int a[], int n)
// function definetion.
{
    int i, h = 0;
    for (i = 0; i < n; i++)
    {
        if (h < a[i])
        {
            h = a[i];
        }
    }
    return 0;
}
