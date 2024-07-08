#include <stdio.h>

int main()
{
    int n;
    printf("Enter the no for which the multiplication table has to be printed:");
    scanf("%d",&n);
    printf("\nMultiplication Table of %d:\n",n);
    for (int i=1; i<=10;i++)
    {
        printf("\n%d*%d=%d",n,i,n*i);
    }
}
