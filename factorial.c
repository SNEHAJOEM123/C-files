#include <stdio.h>

int main()
{
    int n,p=1;
    printf("Enter the value of n:");
    scanf("%d",&n);
    for (int i=1;i<=n;i++)
    {
        p=p*i;

    }
    printf("The factorial of %d = %d",n,p);
}
