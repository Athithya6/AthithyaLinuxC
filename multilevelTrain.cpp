#include<iostream>
using namespace std;
class Train
{
 public:
  Train()
  {
   cout<< " This is a train " <<endl;
  }
};

class ThirdAC:public Train
{
 public:
  ThirdAC()
  {
   cout<< " This is a 3rd AC Train " <<endl;
  }
};

class Humsafar:public ThirdAC
{
 public:
  Humsafar()
  {
   cout<<"The Humsafar train is a combination of the two above properties"
       <<endl;
  }
};

int main()
{
 Humsafar h1;
}       
