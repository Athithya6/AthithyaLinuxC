#include<stdio.h>

int flag=0;

void check(int a[3][3])
{ for (int i=0;i<3;i++)
	{int j=0;
	 if ((a[i][j]==a[i][j+1]==a[i][j+2]) && a[i][j]!=8)
		{flag=1;
		return;}
	}
  for (int j=0;j<3;j++)

	{ int i=0;
	 if ((a[i][j]==a[i+1][j]==a[i+2][j]) && a[i][j]!=8)
		{flag=1;
		return;}
	}
}
	

void main ()
{ 
	
	int n=3,m=3;
	int x,y;
	int a[3][3]={8,8,8,8,8,8,8,8,8,};
	
	printf("User 1 has 1 , User 2 has 0\n");
	
	do{
	printf("User 1 ,enter the coordinates of 1\n");
	scanf("%d %d",&x,&y);
	
	//check(a);
	 //if (flag==1)
		//{ printf("winner winner chicken dinner");}
	
	//else 
	for (int i=0;i<3;i++)	
		{for (int j=0;j<3;j++)	
			if (i==x & j==y)
				{	a[i][j]= 1;
					printf("%c ",a[i][j]);
			 		
					//if (i=!x & j=!y)
					//{a[i][j]= '_';
					//printf("%c",a[i][j]);}
				}
			else
				printf("%d ",a[i][j]);
			printf("\n");
		}
	
	check(a);
	 if (flag==1)
		{ printf("winner winner chicken dinner");}

	printf("User 2 ,enter the coordinates of o");
	scanf("%d %d",&x,&y);
	
	
	
	//check(a);
	 //if (flag==1)
		//{ printf("winner winner chicken dinner");}
	
	//else 
	for (int i=0;i<3;i++)	
		{for (int j=0;j<3;j++)	
			if (i==x & j==y)
				{	a[i][j]= 0;
					printf("%c",a[i][j]);
			 		
					//if (i=!x & j=!y)
					//{a[i][j]= '_';
					//printf("%c",a[i][j]);}
				}
			else
				printf("%d ",a[i][j]);
			printf("\n");

		}
	

	check(a);
	 if (flag==1)
		{ printf("winner winner chicken dinner");}
	
		
	}while(flag==0);

}	







