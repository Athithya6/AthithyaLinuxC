#include<stdio.h>
void A(n)
{
 if(n>0)
 {
  printf("\nbefore %d",n);
  A(n-1);
 printf("\nafter %d",n);
 }
}
void main()
{
  A(6);
}
