/*write a program in c using structure to enter name id and percentage of 20
students.Also display them in proper format according to the ascending order
of percentage scored.[Note: the percentage should be in between 0 to 100]*/

#include <stdio.h>
#include <string.h>
struct student
{
    int id, per;
    char name[30];
} std[5];

int main()
{
    int tempid, tempper;
    char tempname[30];
    for (int i = 0; i < 5; i++)
    {
        printf("Enter id, Name and percentage of %d student\n", i + 1);
        scanf("%d%s%d", &std[i].id, std[i].name, &std[i].per);
    }
    for (int i = 0; i < 5; i++)
    {
        for (int j = i + 1; j < 5; j++)
        {
            if (std[i].per > std[j].per)
            {
                tempid = std[i].id;
                std[i].id = std[j].id;
                std[j].id = tempid;
                strcpy(tempname, std[i].name);
                strcpy(std[i].name, std[j].name);
                strcpy(std[j].name, tempname);
                tempper = std[i].per;
                std[i].per = std[j].per;
                std[j].per = tempper;
            }
        }
    }
    printf("The data of student are listed below\n");
    printf("ID\tName\tPercentage\n");
    for (int i = 0; i < 5; i++)
    {
        printf("%d\t%s\t%d\n", std[i].id, std[i].name, std[i].per);
    }
    return 0;
}
