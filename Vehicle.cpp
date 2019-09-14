#include<iostream>
using namespace std;
class Vehicle
{
 public:
  Vehicle()
  {
   cout<< "This is a vehicle "<<endl;
  }
};

class Car:public Vehicle
{
 
};

int main()
{
 Car obj;
}
