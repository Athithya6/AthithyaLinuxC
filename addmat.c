#include<stdio.h>

int n=0,m=0;

int addmat(int a[][m],int b[][m])
{  
int c[n][m];
for (int i=0;i<n;i++)
{

	for (int j=0;j<m;j++)
	{
	c[i][j] = a[i][j]+b[i][j];
	}
}
return c;
}

int inputmat(int a[][m], int a, int b)
{ 
	
	
	printf("enter the array nos");
	
	for (int i=0;i<n;i++)	
		{for (int j=0;j<m;j++)	
			{scanf("%d",&a[i][j]);}
		}
return a;
}

int outputmat(int a[][m])
{ 	
	for (int i=0;i<n;i++)	
		{for (int j=0;j<m;j++)	
			{printf("%d", a[i][j]);}
		printf("\n");
		}
return a;
}
		



void main ()
{ 
	 printf("enter the array size");
	scanf ("%d %d",&n,&m);

	int a[n][m];
	int b[n][m];

	inputmat(a,n,m);
	inputmat(b,n,m);

	outputmat(addmat(a,b));
}
	
	



	



