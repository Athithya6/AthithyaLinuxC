#include<iostream>
using namespace std;
static int x=1;
class Count
{
 public:
  Count()
  {
   cout<<x<<endl;
   x++;
  }
};

int main()
{
 Count c1[100];
}
 
 
