#include<stdio.h>
int main()
{
 int a[5]={2,4,6,8,10};
 a[1]=a[1]+1;
 printf("\n%d",a);
 a[1]+=1;
 printf("\n%d",a);
 a[1]++;
 printf("\n%d",a);
 return 0;
}
