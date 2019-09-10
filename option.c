#include<stdio.h>
int main()
{
       int a;
       printf("\nWho is the captain of the Indian Cricket Team");
       printf("\n1.MS Dhoni \n2.Virat Kohli \n3.Hardik Pandya \n4.Rohit Sharma");
       printf("\nEnter your option:\n");
       scanf("\n%d",&a);
       switch(a) {
                  case 0:
                         printf("\nMS Dhoni is the captain");
                          break;
                  case 1:
                         printf("\nVirat Kohli is the captain");
                          break;
                  case 2:
                         printf("\nHardik Pandya is the captain");
                          break;
                  case 3:
                         printf("\nRohit Sharma is the captain");
                          break;
                  default:
                         printf("Please enter a valid option");
                          break;
                 }
       return 0;
}
                
       
        
