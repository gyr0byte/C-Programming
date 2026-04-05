/*WAP to find factorial of a number using recursive funtion*/
#include <stdio.h>
int factorial(int);
int main()
{
    int n;
    printf("Enter a number\n");
    scanf("%d", &n);
    printf("The factorial of given number is %d", factorial(n));
    return 0;
}
int factorial(int n)
{
    if (n == 1 || n == 0)
    {
        return 1;
    }
    else
    {
        return (n * factorial(n - 1));
    }
} 