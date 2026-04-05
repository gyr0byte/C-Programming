// Write a program to open a new-file and read roll-no, name, address and
//  of students until the user says "no"  after reafing the data,
// write it to the file then display the content of the file.
#include <stdio.h>
#include <string.h>
int main()
{
    int rollno;
    char name[30], add[30], choose[1];
    FILE *fp;
    fp = fopen("Student.txt", "w");
    do
    {
        printf("Enter roll no, name and address of student\n");
        scanf("%d%s%s", &rollno, name, add);
        fprintf(fp, "%d\t%s\t%s\n", rollno, name, add);
        printf("Do you want to store more records (Y/N)?\n");
        scanf("%s", choose);
        strupr(choose);
    } while (strcmp(choose, "Y") == 0);
    fclose(fp);
    printf("The records are\n");
    printf("Roll No\tName\tAddress\n");
    fp = fopen("Student.txt", "r");
    while (fscanf(fp, "%d%s%s", &rollno, name, add) != EOF)
    {
        fscanf(fp, "%d%s%s", &rollno, name, add);
        printf("%d\t%s\t%s\n", rollno, name, add);
    }
    fclose(fp);
    return 0;
}
