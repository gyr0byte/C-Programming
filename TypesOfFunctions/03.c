/*without arguement with return value */
#include <stdio.h>
int aor();
int main()
{
    int x;
    x = aor();
    printf("The area of rectangle is %d.", x);
    return 0;
}
int aor()
{
    int l, b, area;
    printf("Enter length and breadth\n");
    scanf("%d%d", &l, &b);
    area = l * b;
    return area;
}