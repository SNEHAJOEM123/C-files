#include <stdio.h>
#include <math.h>

int main()
{
    float a,b,c,d,d1,d2,d3,root,root1,root2,root3,root4,real_part,imag_part;
    printf("Enter the value of a:");
    scanf("%f",&a);
    printf("Enter the value of b:");
    scanf("%f",&b);
    printf("Enter the value of c:");
    scanf("%f",&c);
    d=b*b-4*a*c;
    d1=sqrt(d);
    d2=-d;
    d3=sqrt(d2);


    if (d>0)
    {
        printf("The quadratic equation has two distinct roots\n");
        root1= (-b+d1)/(2*a);
        root2= (-b-d1)/(2*a);
        printf("The roots are %f and %f\n",root1,root2);
        
    }

    else if (d==0)
    {
        printf("The quadratic equation has two equal roots\n");
        root= -b/(2*a);
        printf("The roots are %f and %f\n ",root,root);

    }

    else
    {
        printf("The quadratic equation has imaginary roots\n");
        real_part= -b/(2*a);
        imag_part= d3/(2*a);
        printf("The roots are %f+%fi and %f-%fi",real_part,imag_part,real_part,imag_part);
    }
    return 0;



}