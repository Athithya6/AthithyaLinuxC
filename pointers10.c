#include<stdio.h>

void copystring(char* string2,char* string1)
{
 while(*string1!='\0')
   {
    *string2=*string1;
    *string1++;
    *string2++;
   }
 *string2='\0';
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
