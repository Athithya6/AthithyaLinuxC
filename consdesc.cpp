#include<iostream>
using namespace std;
static int x=0;
class Display
{
 public:
 Display()
 {
  x++;
  cout<<x<<endl;
  
 }
 ~Display()
 {
  cout<<x*x<<endl;
  x--;
 }
};

int main()
{
 Display d1[10];
}
 


 
