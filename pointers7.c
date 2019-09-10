#include<stdio.h>
#include<string.h>
void main()
{
 char str1[20];
 char str2[20];
 char str3[40];
 char str4[40];
 char str5[40]="I am placed at LTTS Banglore";
 char str6[40];
 printf("Enter a string:\n");
 gets(str1);
 strcpy(str2,str1);
 strcpy(str3,"\nI am Athithya");
 strcpy(str4,"\nI love programming");
 strncpy(str6,str5,10);
 printf("%s %s %s %s \n%s",str2,str3,str4,str5,str6);
}
 
