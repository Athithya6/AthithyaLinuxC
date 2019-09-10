#include<stdio.h>
int main()
{
         int j,n;
         printf("Which number table do you want to be displayed:\n");
         scanf("%d",&n);
         for(j=0;j<=10;j++) 
         {
              printf("\n%d",j*n);
         }
         return 0;
}
