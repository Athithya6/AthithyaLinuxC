#include<stdio.h>
int main() 
{
        int i,j;
        for(i=0;i<3;i++) {
                for(j=0;j<3;j++) {
                       if(i+j>=2) {
                                   printf("\t*");
                                  }
                                  }
          printf("\n");
                         }
        return 0;
}
