#include<stdio.h>
int main()
{
    for (int i=1;i<=100;i++)
    {
        if(i%15==0)
            printf("\nFizz Buzz");
        else if(i%3==0)
            printf("\nFizz");
        else if(i%5==0)
            printf("\nBuzz");
        else
            printf("\n%d",i);
    }
    return 0;
}
