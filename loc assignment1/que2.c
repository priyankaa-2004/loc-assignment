#include <stdio.h>
int main()
{
  int n;
  printf("enter a num");
  scanf("%d",&n);
  if(n>0)
    printf("positive num");
  else if(n<0)
    printf("negative num");
  else
    printf("the num is zero");
  return 0;
}