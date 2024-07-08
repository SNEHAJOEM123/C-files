#include <stdio.h>

int main()
{
    int a,b;
    printf("Before swapping\n");
    printf("Enter the value of a:");
    scanf("%d",&a);
    printf("Enter the value of b:");
    scanf("%d",&b);
    int t=a;
    a=b;
    b=t;
    printf("After Swapping\n");
    printf("The value of a=%d",a);
    printf("\nThe value of b=%d",b);
}
