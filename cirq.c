#include<stdio.h>
#define SIZE 5
int cirq[SIZE],front=-1,rear=-1;
int n;
int enqueue(n)
{
 if(((rear==SIZE-1)&&front==0)||(front==rear+1))
 {
  printf("\nQueue is full");
  return;
 }
 else
 {
  front=0;
  rear=(rear+1)%SIZE;
  cirq[rear]=n;
  printf("\nElement entered=%d",n);
 }
 return 0;
}
int dequeue()
{
 if(front==-1)
 {
  printf("\nQueue is empty");
  return;
 } 
 else
 {
  n=cirq[front];
  if(front==rear)
  {
   front==-1;
   rear==-1;
  }
 
 else
 {
  front=(front+1)%SIZE;
  printf("\nDeleted element is=%d",cirq[front]);
  
 }
 }
 return 0;
}

int display()
{
 if(front==rear==-1)
 {
  printf("\nQueue is empty");
 }
 else
 {
  printf("\nCIRCULAR QUEUE:\n");
  for(int i=front;i!=rear;i=(i+1)%SIZE)
  {
   printf("\n%d",cirq[i]);
  }
 }
  return 0;
}

int main()
{
 int a;
 do
 {
  printf("\nCIRCULAR QUEUE OPERATIONS:\n");
  printf("\n1.Display \n2.Enqueue \n3.Dequeue \n4.Quit");
  printf("\nEnter an option:\n");
  scanf("%d",&a);
  switch(a)
  {
   case 1:
   {
    display();
    break;
   }
   case 2:
   {
    printf("\nEnter an element:\n");
    scanf("%d",&n);
    enqueue(n);
    break;
   }
   case 3:
   {
    dequeue();
    break;
   }
   case 4:
   {
    exit(0);
   }
  }
 }while(a!=4);
 return 0;
}
    
  
 
