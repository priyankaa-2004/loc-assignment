#include <stdio.h>
int main()
{
  int r;
  printf("enter radius of circle");
  scanf("%d",&r);
  printf("\n Diameter of the circle is %d",2*r);
  printf("\n Circumference of the circle is %f",2*3.14*r);
  printf("\n area of the circle is %f",3.14*r*r);
  return 0;
}