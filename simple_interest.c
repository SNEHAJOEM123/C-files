#include <stdio.h>

int main()
{
    float p,i,y,interest;
    printf("Enter the value of the principal amount:");
    scanf("%f",&p);
    printf("Enter the rate of interest:");
    scanf("%f",&i);
    printf("Enter the no of years:");
    scanf("%f",&y);
    interest=p*i*y;
    printf("Simple interest=%f",interest);

}