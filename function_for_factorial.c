//c program to find the factorial of a no by using function

#include <stdio.h>

long int factorial(long int n)
{
    long int fact=1;
    for (int i=1;i<=n;i++)
    {
        fact=fact*i;
    }
    return fact;
}

void main()
{
    long int res,n;
    printf("Enter the value of n:");
    scanf("%d",&n);
    res=factorial(n);
    printf("The factorial of %d = %d",n,res);
}