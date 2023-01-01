#include<stdio.h>
int main()
//werite a program to chek given year is leap year or not.
{
    int year;
    printf("enter a year:");
    scanf("%d",year);
    //if year is not century year is perfectly divisible by 4.
    if(year % 400==0)
    {
        printf("%d is a leap year",year);
    }
    else if (year % 4==0)
    {
        printf("%d is leap year",year);
    }
    else if (year % 100!=0)
    {
        printf("%d is not a leap year",year);
    }
    else
    {
        printf("you are enter wrong value");
    }
    return 0;
}