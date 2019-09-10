#include<stdio.h>
int main()
{
         int a[3][3],b[3][3];
         int i,j;
         printf("Enter the values of a:\n");
         for(i=0;i<=2;i++)
         {
           for(j=0;j<=2;j++)
           {
             scanf("\n%d",&a[i][j]);
           }
         }
         printf("Enter values of b:\n");
         for(i=0;i<=2;i++)
         {
           for(j=0;j<=2;j++)
            {
               scanf("\n%d",&b[i][j]);
            }
         }
         for(i=0;i<=2;i++)
         {
           for(j=0;j<=2;j++)
            {
               printf("%d",a[i][j]);
            }
            printf("\t");
            printf("\n");
         }
         for(i=0;i<=2;i++)
         {
           for(j=0;j<=2;j++)
              {
                printf("%d",b[i][j]);
              }
            printf("\t");
            printf("\n");
         }
        return 0;
}

