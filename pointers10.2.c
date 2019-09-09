#include<stdio.h>

void copystring(char string2[],char string1[])
{
 int i=0;
 while(string1[i]!='\0')
   {
    string2[i]=string1[i];
    i++;
   }
 string2[i]='\0';
}

int main()
{
 char str1[100];
 char str2[100];
 printf("Enter a string:\n");
 gets(str1);
 copystring(str2,str1);
 printf("\nThe copied string is:%s",str2);
 return 0;
}
