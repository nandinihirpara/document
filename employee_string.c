#include <stdio.h>
#include <string.h>
struct employee
{
    int ID, age, salary;
    char name[10], department;
};
int main()
{
    int num;
    printf("enter number of employee =");
    scanf("%d", &num);
    struct employee emp[num];
    for (int i = 0; i < num; i++)
    {
        printf("\n enter your %d employee =", i + 1);
        printf("\n enter employee ID =");
        scanf("%d", &emp[i].ID);
        printf("enter department =");
        scanf("%c", emp[i].department);
        printf("enter age =");
        scanf("%d" &[i].age);
        printf("enter salary =");
        scanf("%d" &[i].salary);
    }
    printf("--------------------------------------------------------------------------------------------\n");
    printf("emp_ID\t|emp_department\t|emp_name\t|emp_age\t|emp_salary\t|\n");
    printf("---------------------------------------------------------------------------------------------\n");
    for (int i = 0; i < num; i++)
    {
        printf("%d\t|%d\t\t|%s\t\t|%d\t\t|%d\t\t|\n", emp[i].ID, emp[i].department, emp[i].name, emp[i].age, emp[i].salary);
        printf("--------------------------------------------------------------------------------------------------------\n");
    }
    return 0;
}