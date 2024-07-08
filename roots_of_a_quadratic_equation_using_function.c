#include <stdio.h>
#include <math.h>

void roots(float a,float b,float c);

void roots(float a,float b,float c)
{
    float d=b*b-4*a*c;

    if (d>0)
    {
        printf("The quadratic equation has two distinct roots\n");
        float root1= (-b+sqrt(d))/(2*a);
        float root2= (-b-sqrt(d))/(2*a);
        printf("The roots are %f and %f\n",root1,root2);
    }

    else if (d==0)
    {
        printf("The quadratic equation has two equal roots\n");
        float root=-b/(2*a);
        printf("The roots are %f and %f",root,root);
    
    }

    else
    {
        printf("The quadratic equation has imaginary roots\n");
        float real_part=-b/(2*a);
        float imag_part=sqrt(-d)/(2*a);
        printf("The roots are %f+%fi and %f-%fi",real_part,imag_part,real_part,imag_part);
    }
    
}


int main()
{
    float a,b,c;
    printf("Enter the value of a:");
    scanf("%f",&a);
    printf("Enter the value of b:");
    scanf("%f",&b);
    printf("Enter the value of c:");
    scanf("%f",&c);
    roots(a,b,c);

}