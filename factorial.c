#include<stdio.h>
int factorial(int n);

int factorial(int x) {
                      int i,fact=1;
                      for(i=x;i>=1;i--) {
                                          fact=fact*i;
                                       }
                     return fact;
                      }

int main() {
             int a,f;
             printf("Enter a number:\n");
             scanf("%d",&a);
             f=factorial(a);
             printf("\nThe factorial of the entered number is:\n%d",f);
             
}
                               
