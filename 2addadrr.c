/*ATHITHYA*/
#include<stdio.h>
int add(int a[][2],int b[][2]);

int add(int a[][2],int b[][2])
{
 int i,j;
 for(i=0;i<2;i++)
 {
  for(j=0;j<2;j++)
  {
   printf("%d",a[i][j]+b[i][j]);
  }
   printf("\n");
  }
}

int main()
{
  int i,j;
  int a[2][2],b[2][2];
  printf("Enter the A matrix values:\n");
  for(i=0;i<2;i++)
  {
   for(j=0;j<2;j++)
   {
    scanf("%d",&a[i][j]);
   }
  }
  printf("Enter the B matrix values:\n");
  for(i=0;i<2;i++)
  {
   for(j=0;j<2;j++)
   {
    scanf("%d",&b[i][j]);
   }
  }
  printf("Addition of the two matrices:\n");
  add(a,b);
  return 0;
}





