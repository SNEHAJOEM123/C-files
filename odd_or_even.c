#include <stdio.h>

int main()
{
    int n;
    printf("Enter the no to be checked:");
    scanf("%d",&n);
    if (n%2==0)
    {
        printf("%d is an even no",n);

    }

    else
    {
        printf("%d is an odd no",n);
    }
}
