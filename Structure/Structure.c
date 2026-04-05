/*WAP to store information of 5 employee (eid,name,salary, address) and
display only those employee who has salary between 15000 to 20000 using structure*/
#include <stdio.h>
struct employee
{
    int id, salary;
    char name[30], add[30];
} emp[5];

int main()
{
    int i;
    for (i = 0; i < 5; i++)
    {
        printf("Enter eid, name, salary and address of %d empolyee\n", i + 1);
        scanf("%d%s%d%s", &emp[i].id, emp[i].name, &emp[i].salary, emp[i].add);
    }
    printf("The records of employee are:\n");
    printf("EID\tName\tSalary\tAddress\n");
    for (i = 0; i < 5; i++)
    {
        if (emp[i].salary > 15000 && emp[i].salary < 20000)
        {
            printf("%d\t%s\t%d\t%s\n", emp[i].id, emp[i].name, emp[i].salary, emp[i].add);
        }
    }
    return 0;
}