#include<stdio.h>
#define MAXSIZE=201
int a;
int queue[MAXSIZE],front=-1,rear=-1;

void enqueue(int n)
{
 if(rear==a-1)
 {
  printf("\nQueue is full");
 else
 {
  if(front==-1)
  {
   front=0;
   queue[++rear]=n;
   printf("Value inserted=%d",n);
  }
 }
}

void dequeue()
{
 if(front==rear==-1)
 {
  printf("\nQueue is empty");
 }
 else
 {
  front++;
  printf("\nRemoved element=%d",queue[front]);
 }
 if(front>rear)
 {
  front=rear=-1
 }
}
 
void print()
{
 printf("QUEUE:\n");
 if(rear==-1)
 {
  printf("Queue is empty");
 }
 else
 {
 for(int i=0;i<=rear;i++)
 {
  printf("\n%d",queue[i]);
 }
 }
}

int main()
{
 int b,c;
 printf("Enter the size of the queue:\n");
 scanf("%d",&a);
 do
 {
 printf("QUEUE OPERATIONS USING ARRAY:\n");
 printf("\n1.Enqueue-enter an element \n2.Dequeue-delete an element \n3.Display the queue \n4.Quit");
 printf("\nEnter your choice:\n");
 scanf("%d",&b);
 switch(b)
 {
  case 1:
  {
   printf("\nEnter the element to be entered:\n");
   scanf("%d",&c);
   enqueue(c);
   break;
  }
  case 2:
  {
   dequeue();
  }
  case 3:
  {
   print();
  }
  case 4:
  {
   exit(0);
  }
  default:
  {
   printf("Enter a valid option from 1 to 4:\n");
  }
  }while(b!=4);
  return 0;
}

