#include <stdio.h>

void main()
{
    char l[10];
    char classes[10];
    char ch;
    int n,j,i=0;
    scanf("%c",&ch);
    scanf(" %d",&n);

    while (1)
    {
        if (ch=='r')
        {
            for(j=0;j<n;j++)
            {
              char class;
              scanf(" %c",&class);
              classes[j]=class;

            }
            

        }
        else if (ch=='p')
        {
            l[i]='p';
            i=i+1;
        }
        else if (ch=='t')
        {
            l[i]='t';
            break;

        }
        else
        {
            printf("Invalid choice");
        }
        scanf("\n%c",&ch);

    }
    
    for (i=0;i<n;i++)
    {
        printf("%c ",classes[i]);
    }

    
    i=0;
    while (1)
    {
        if (l[i]=='p')
        {
            printf("\nHello");
            i=i+1;
        }
        else if (l[i]=='r')
        {
            printf("Hey");
            i=i+1;
        }
        else if(l[i]=='t')
        {
            break;
        }
        else
        {
            printf("Invalid choice");
        }
    }
}