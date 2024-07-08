#include <stdio.h>

int main()
{
    int n,s;
    printf("Enter the value of n:");
    scanf("%d",&n);
    for (int i=0;i<=n;i++)
    {
        s=s+i;
    }
    printf("The sum of first n natural no=%d",s);
}