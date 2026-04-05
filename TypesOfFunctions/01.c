/*With arguement and with return value*/
#include <stdio.h>
int aor(int, int);
int main()
{
    int l, b, x;
    printf("Enter length and breadth\n");
    scanf("%d%d", &l, &b);
    x = aor(l, b);
    printf("The area of rectangle is %d.", x);
    return 0;
}
int aor(int l, int b)
{
    int area;
    area = l * b;
    return area;
}