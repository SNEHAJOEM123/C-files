#include <stdio.h>

int main()
{
  int n,count=1;
  printf("How many nos do you use? ");
  scanf("%d",&n);
  float sum=0;
  int num;
  float avg;
  do
  {
      printf("Enter the no:");
      scanf("%d",&num);
      sum=sum+num;
      count++;

  }while(count<=n);
  avg=sum/n;
  printf("Average of these nos=%f",avg);
return 0;
}