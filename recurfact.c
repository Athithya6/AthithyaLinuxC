#include<stdio.h>
int factorial(int n);

int factorial(int x) {
                        if(x>=1) {
                                        return x*factorial(x-1);
                                       }
                        else
                              return 1;
                     }
int main() {
             int a,f;
             printf("Enter a number");
             scanf("%d",&a);
             f=factorial(a);
             printf("The factorial of the number is:%d",f);
             return 0;
           }
