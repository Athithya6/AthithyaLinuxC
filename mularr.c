#include<stdio.h>
int main()
{
 int a[10][10],b[10][10],c[10][10];
 int i,j,p,q,m,n,k;
 int sum=0;
 printf("Enter the no.of rows and columns for matrix A:\n");
 scanf("%d %d",&p,&q);
 printf("Enter the no.of rows and columns for matrix B:\n");
 scanf("%d %d",&m,&n);
 if(q!=m)
 {
  printf("Invalid input");
 }
 else
 {
  printf("Enter the values for matrix A:\n");
  for(i=0;i<p;i++)
  {
   for(j=0;j<q;j++)
   {
    scanf("\n%d",&a[i][j]);
   }
   }
  printf("Enter the values for matrix B:\n");
  for(i=0;i<m;i++)
  {
   for(j=0;j<n;j++)
   {
    scanf("\n%d",&b[i][j]);
   }
  }

  for(i=0;i<p;i++)
  {
   for(j=0;j<n;j++)
   {
    for(k=0;k<m;k++)
    {
     sum=sum+a[i][k]*b[k][j];
    }
    c[i][j]=sum;
   }
  }

  printf("The product is:\n");
  for(i=0;i<p;i++)
  {
   for(j=0;j<n;j++)
   {
    
    printf("\t%d",c[i][j]);
    printf("\n");
   }
   }
   return 0;
   }
}

