#include<stdio.h>
int add(int a,int b)
{
  if(!a)
  {
    return b;
  }
  else
    {
     return add((a&b)<<1,a^b);
    }
return 0;
}

int main()
{
  int c;
  c=add(5,6);
  printf("The required sum is:\n%d",c);
  return 0;
}
