
// A simple C program to introduce 
// a linked list 
#include <stdio.h> 
#include <stdlib.h> 
  
struct Node { 
    int data; 
    struct Node* next; 
}; 
  
void printList(struct Node* n) 
{ 
    while (n != NULL) { 
        printf(" %d ", n->data); 
        n = n->next; 
    } 
} 

void printListmid(struct Node* tmp)
{
   while(tmp!=NULL)
   {
    printf(" %d ", tmp->data);
    tmp = tmp->next;
   }
}

int main() 
{ 
    struct Node* tmp = NULL;
    struct Node* mid = NULL;
    struct Node* head = NULL; 
    struct Node* second = NULL; 
    struct Node* third = NULL; 
  
    tmp= (struct Node*)malloc(sizeof(struct Node));
    mid= (struct Node*)malloc(sizeof(struct Node));
    head = (struct Node*)malloc(sizeof(struct Node)); 
    second = (struct Node*)malloc(sizeof(struct Node)); 
    third = (struct Node*)malloc(sizeof(struct Node)); 

    tmp->data  = 0;
    tmp->next  = mid;
    mid->data  = 4;
    mid->next  = head;
    head->data = 1;  
    head->next = second; 
    second->data = 2; 
    second->next = third; 
    third->data = 3; 
    third->next = NULL; 
  
    
    printList(tmp); 
    return 0; 
}


