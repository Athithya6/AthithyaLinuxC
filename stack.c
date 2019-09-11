#include<stdio.h>
#define MAXSIZE 201
int stack[MAXSIZE];
int top=-1;
int a;
 void push(int n)
 {
  if(top==a-1)
  {
   printf("\nStack Overflow-no more elements can be added");
  }
  else
  stack[++top]=n;
  printf("\nThe added element is:%d",stack[top]);
 }
 
 void pop()
 {
  if(top==-1)
  {
   printf("\nStack empty-no more elements to be deleted");
  }
  else
  printf("\nThe deleted element is:%d",stack[top]);
  top--;
 }
 
 void print()
 {
  printf("Stack:\n");
  for(int i=0;i<=top;i++)
  {
   printf("\n%d",stack[i]);
  }
 }
 
 int main()
 {
  int b,p,q,r;
  printf("Enter the stack size(MAX=200):\n");
  scanf("%d",&a);
  printf("\nSTACK OPERATIONS USING ARRAY:\n");
  printf("\n1.Push \n2.Pop \n3.Print Stack \n4.Quit");
  do
  {
   printf("\nEnter your choice:\n");
   scanf("%d",&b);
   switch(b)
   {          case 1:{
                     printf("Enter a value to be pushed:\n");
                     scanf("%d",&p);
                     push(p);
                     break;
              }
              
              case 2:{
                     pop();
                     break;
                     }
              
              case 3:{
                      print();
                      break;
                     }
             case 4:{
                    exit(0);
                    }
             default:{
                    printf("Enter a valid choice: 1,2,3 or 4");
                     }
   }
   }while(b!=4);
   return 0;
}

                     
        
                     
   
  
