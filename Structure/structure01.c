/*WAP to ask rollno name marks gender and address of 5 student and display
only those student whose address is KATHMANDU using structure*/
#include <stdio.h>
#include <string.h>
struct student
{
    char name[30], gender[30], add[30];
    int rollno, marks;
} std[5];
int main()
{
    int i;
    for (i = 0; i < 5; i++)
    {
        printf("Enter rollno, name, marks, gender and address of %d student.\n", i + 1);
        scanf("%d%s%d%s%s", &std[i].rollno, std[i].name, &std[i].marks, std[i].gender, std[i].add);
        strupr(std[i].add);
    }
    printf("The records of student whose address is kathmandu are\n");
    printf("Roll_No\tName\tMarks\tGender\tAddress\n");
    for (i = 0; i < 5; i++)
    {
        if (strcmp(std[i].add, "KATHMANDU") == 0)
        {
            printf("%d\t%s\t%d\t%s\t%s\n", std[i].rollno, std[i].name, std[i].marks, std[i].gender, std[i].add);
        }
    }
    return 0;
}