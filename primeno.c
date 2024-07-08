#include <stdio.h>


int main()
{
    int n;
    int flag=0;
    printf("Enter the no to be checked:");
    scanf("%d",&n);
    for (int i=2;i<n;i++)
    {
        if (n%i==0)
        {
            printf("It is not a prime no");
            flag=1;
            break;
        }

    }
    if (flag==0)
    {
        printf("It is a prime no");
    }

}
