/*WAP to ask 5 student their id, name,class, and address and display only those student
whose address is kathmandu using structure*/
#include <stdio.h>
#include <string.h>
struct student
{
    int id, class;
    char name[30], address[30];
} std[5];
int main()
{
    int i;
    for (i = 0; i < 5; i++)
    {
        printf("Enter id, name, class and address of %d student\n", i + 1);
        scanf("%d%s%d%s", &std[i].id, std[i].name, &std[i].class, std[i].address);
        strupr(std[i].address);
    }
    printf("The records of student whose address are kathmandu are listed below\n");
    printf("ID\tName\tClass\tAddress\n");
    for (i = 0; i < 5; i++)
    {
        if (strcmp(std[i].address, "KATHMANDU") == 0)
        {
            printf("%d\t%s\t%d\t%s\n", std[i].id, std[i].name, std[i].class, std[i].address);
        }
    }
    return 0;
}