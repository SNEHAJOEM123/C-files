#include <stdio.h>
#include <ctype.h>
#define EOL '\n'


int main()
{
    char letter[100];
    int count=0,tag;

    while ((letter[count]=getchar())!=EOL)
    {
        count++;
    }
    tag=count;
    count=0;

    while (count<tag)
    {
        putchar(toupper(letter[count]));
        count++;
    }


    

}