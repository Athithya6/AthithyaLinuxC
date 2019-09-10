#include<stdio.h>
int main()
{
 int x=5;
 int *y=&x;
 printf("\n%d",x);
 printf("\n%d",y);
 printf("\n%u",&x);
 printf("\n%d",*y);
 printf("\n%u",&y);
 return 0;
}
