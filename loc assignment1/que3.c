#include <stdio.h>
int main()
{
  int d,n,sum=0;
  printf("enter a num");
  scanf("%d",&n);
  do
  {
    d=n%10;
    sum+=d;
    n=n/10;
  }
  while(n>0);
  printf("sum of the digits is %d",sum);
  return 0;
}