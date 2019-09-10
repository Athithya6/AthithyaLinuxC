#include<stdio.h>
#include<string.h>
void main()
{
 char str1[100]="I am Athithya Narayan, working at LTTS Banglore";
 char str2[20]="kin";
 char* c;
 c=strstr(str1,str2);

 if(c)
 {
  printf("\nOccurrence found!");
  printf("\nFirst occurrenec of %s in %s is:\n%s",str2,str1,c);
 }
}
