#include<stdio.h>
int main()
{
 int i,j;
 int a[3][3];
 printf("Enter the elements of the matrix:\n");
 for(i=0;i<=2;i++)
 {
  for(j=0;j<=2;j++)
  {
   scanf("%d",&a[i][j]);
  }
  }

for(i=0;i<=2;i++)
{
 for(j=0;j<=2;j++)
 {
 if((i==j)||(i+j==2))
 {
  printf("%d",a[i][j]);
 }
 else
  printf(" ");
 }
 printf("\n");
}
  return 0;
}
