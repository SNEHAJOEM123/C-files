//this program will only take one character and change it into upper case
#include <stdio.h>
#include <ctype.h>

void main()
{
    int lower,upper;
    lower=getchar();
    upper= toupper(lower);
    putchar(upper);
}