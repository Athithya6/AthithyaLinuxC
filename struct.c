#include<stdio.h>
struct structure
{
 int age;
 char name[50];
 int phone[15];
}s;
int main()
{
struct structure s1;
printf("Enter information:\n");
printf("Enter age:\n");
scanf("%d",&s1.age);
printf("Enter name:\n");
gets(s1.name);
printf("Enter phone number:\n");
for(int i=0;i<10;i++)
{
 scanf("%d",&s1.phone);
}

printf("\nAge:\n%d",s1.age);
printf("\nName:\n%s",s1.name);
printf("\nPhone number:\n%ld",s1.phone);
return 0;
}
