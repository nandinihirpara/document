#include <stdio.h>
int main()
{
    int i, k = 0;
    for (i = 1; i <= 8; i++, k = 0)
    {
        for (int j = 1; j <= 8 - i; j++)
        {
            printf("  ");
        }
        while (k != 2 * i - 1)
        {
            printf("* ");
            k++;
        }
        printf("\n");
    }
    return 0;
}
