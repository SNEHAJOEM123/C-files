#include <stdio.h>

int main()
{
    int y;
    printf("Enter the year to be checked:");
    scanf("%d",&y);

    if (y%100==0)
    {
        if (y%400==0)
        {
            printf("It is a leap year");
        }
        else
        {
            printf("It is not a leap year");

        }
    }

    else if(y%4==0)
    {
        printf("It is a leap year");
    }
    else
    {
        printf("It is not a leap year");
    }

}