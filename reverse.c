#include<stdio.h>
void main()
{
 char str1[100];
 printf("Enter any string:\n");
 gets(str1);
 int i,length=0;
 for(i=0;str1[i]!='\0';i++)
 {
  length++;
 }
 for(i=length-1;i>=0;i--)
 {
  if (str1[i] == ' ')
  {
   str1[i]='\0';
  printf("%s ",&(str1[i])+1);
  }
 }
 
 printf("%s ",str1);
   
}
