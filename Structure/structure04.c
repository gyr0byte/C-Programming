#include <stdio.h>
struct result
{
    int class;
    float gpa;
    char name[30], add[30];
};

int main()
{
    int n, i;
    printf("How many data you want to enter?\n");
    scanf("%d", &n);
    struct result res[n];
    for (i = 0; i < n; i++)
    {
        printf("Enter name,class,address and gpa of %d stduent\n", i + 1);
        scanf("%s%d%s%f", res[i].name, &res[i].class, res[i].add, &res[i].gpa);
    }
    printf("The records of student whose gpa are higher than 3 are\n");
    printf("Name\tClass\tAddress\tGPA\n");
    for (i = 0; i < n; i++)
    {
        if (res[i].gpa > 3 && res[i].gpa <= 4)
        {
            printf("%s\t%d\t%s\t%.2f\n", res[i].name, res[i].class, res[i].add, res[i].gpa);
        }
    }
    return 0;
}