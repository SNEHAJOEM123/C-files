#include <stdio.h>
const int size=1e5;

void read_students(char A[],int n)
{
    int i;
    for (i=0;i<n;i++)
    {
        scanf("%c ",&A[i]);
    }
}

void print_students(char A[],int n)
{
    int i;
    for (i=0;i<n;i++)
    {
        printf("%c ",A[i]);
    }
    printf("\n");
}

void arrange_students(char A[],int n)
{
    int j,k;
    char temp;
    for (j=0;j<n-1;j++)
    {
        for(k=0;k<n-i-1;k++)
        {
            if (A[k]%13>A[k+1]%13)
            {
                temp=A[k];
                A[k]=arr[k+1]
            }
        } 
    }
}