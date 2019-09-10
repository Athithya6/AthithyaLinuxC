#include<stdio.h>


int swap(int *a,int *b)
{
 int t;
 t=*a;
 *a=*b;
 *b=t;
 printf("\nAfter swapping,a=%d,b=%d",*a,*b); 
 
}

int main()
{
 int m,n;
 printf("Enter any two numbers:\n");
 scanf("%d %d",&m,&n);
 printf("\nBefore swapping,a=%d,b=%d",m,n);
 swap(&m,&n);
 return 0;
}

