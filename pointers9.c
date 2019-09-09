#include<stdio.h>

int compare(char *str1,char *str2)
{
 while(*str1==*str2)
 {
  if(*str1!='\0'&&*str2!='\0')
  {
   break;
   *str1++;
   *str2++;
  }
  return *str1-*str2;
 }
}
  
int main()
{
 char str1[100];
 char str2[100];
 int diff;
 printf("Enter the first string:\n");
 gets(str1);
 printf("Enter the second string:\n");
 gets(str2);
 
 diff=compare(str1,str2);
 
 if(diff>1)
 {
  printf("The first string is longer than the second");
 }
 else if(diff<1)
 {
  printf("The second string is longer than the first");
 }
 else
  printf("Both the strings are equal");
 return 0;
}

