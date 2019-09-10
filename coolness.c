#include<stdio.h>
int main()
{
        int num;
        char name[30];
        printf("Enter your name:\n");
        scanf("%s",name);
        printf("Enter your self-rating out of 10:\n");
        scanf("%d",&num);
        if(num>7) {
                    printf("\nHey dude %s, you're cool",name);
                  }
        else      {
                    printf("\nBetter luck next time %s",name);
                  }
        return 0;
}
              
