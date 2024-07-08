#include <stdio.h>

int main()
{
    float c,f;
    printf("Enter the temperature in celsius:");
    scanf("%f",&c);
    f=(9*c/5)+32;
    //printf("%.2f Celsius=%.2f Fahrenheit ",c,f);
    printf("%f Celsius = %f Fahrenheit",c,f);
    

}
