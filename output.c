#include <stdio.h>
#include <stdlib.h>

int sum=0;
float avg;
void read(int,int *);
void display(int,int *);

int main()
{
    int n,i;
    int *p;
    printf("Enter the value of n");
    scanf("%d",&n);
    p=(int *)malloc(n*sizeof(int));
    if(p==NULL)
    {
        printf("Error!memory not allocated");
        exit(0);
    }
    read(n,p);
    display(n,p);
    free(p);
    return 0;
}

void read(int n,int *p)
{
    int i;
    for(i=0;i<n;i++)
    scanf("%d",p+i);
}

void display(int n,int *p)
{
    int i;
    for(i=0;i<n;i++)
      sum=sum+*(p+i);
    avg=sum/n;
    printf("%f",avg);
    return;  
}

