#include <stdio.h>
int main()
{
  int a,b,n;
  printf("enter 2 nos");
  scanf("%d %d",&a,&b);
  printf("enter 1 for addition, 2 for subtraction, 3 for multiplication, 4 for division");
  scanf("%d",&n);
  switch(n)
  {
   case 1:
     printf("sum: %d",a+b);
     break;
   case 2:
     printf("difference: %d",a-b);
     break;
   case 3:
     printf("product: %d",a*b);
     break;
   case 4:
     printf("division: %d",a/b);
     break;
   default:
     printf("the two nos are %d %d",a,b);
  }
  return 0;
}