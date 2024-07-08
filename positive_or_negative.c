#include <stdio.h>

int main()
{
    int n;
    printf("Enter the no to be checked:");
    scanf("%d",&n);

    if (n>0)
    {
        printf("%d is a positive no",n);
    }
    else if(n<0)
    {
        printf("%d is a negative no",n);

    }
    else
    {
        printf("0 is neither positive or negative");


    }
    
    
}