#include<stdio.h>
void main()
{
 char *name[5]={"Ravi","Ravindra","Deva"};
 printf("\n%s",(*name+1));
 printf("\n%s",(*name+2)+7);
}
