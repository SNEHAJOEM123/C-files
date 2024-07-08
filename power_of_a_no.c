#include <stdio.h>
#include <math.h>

int main()
{
    int a,b,p; 
    printf("Enter the value of a:");
    scanf("%d",&a);
    printf("Enter the power b: ");
    scanf("%d",&b);
    p=pow(a,b);
    printf("%d raised to the power %d = %d",a,b,p);

}