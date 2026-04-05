/*With arguement and without return value*/
#include <stdio.h>
void aor(int, int);
int main()
{
    int l, b;
    printf("Enter length and breadth\n");
    scanf("%d%d", &l, &b);
    aor(l, b);
    return 0;
}
void aor(int l, int b)
{
    int area;
    area = l * b;
    printf("The area of rectangle is %d.", area);
}