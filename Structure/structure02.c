/*WAP to ask Title author name and price of 5 boooks and display it in ascending order using structure*/
#include <stdio.h>
#include <string.h>
struct books
{
    char title[30], author[30];
    int price;
} bks[5];

int main()
{
    int i, j, tempprice;
    char tempauthor[30], temptitle[30];
    for (i = 0; i < 5; i++)
    {
        printf("Enter title, author name and price of %d book\n", i + 1);
        scanf("%s%s%d", bks[i].title, bks[i].author, &bks[i].price);
    }
    for (i = 0; i < 5; i++)
    {
        for (j = i + 1; j < 5; j++)
        {
            if (bks[i].price > bks[j].price)
            {
                strcpy(temptitle, bks[i].title);
                strcpy(bks[i].title, bks[j].title);
                strcpy(bks[j].title, temptitle);
                strcpy(tempauthor, bks[i].author);
                strcpy(bks[i].author, bks[j].author);
                strcpy(bks[j].author, tempauthor);
                tempprice = bks[i].price;
                bks[i].price = bks[j].price;
                bks[j].price = tempprice;
            }
        }
    }
    printf("The list of author accoring to price are\n");
    printf("Title\tAuthor_Name\tPrice\n");
    for (i = 0; i < 5; i++)
    {
        printf("%s\t%s\t%d\n", bks[i].title, bks[i].author, bks[i].price);
    }
    return 0;
}
