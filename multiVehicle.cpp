#include<iostream>
using namespace std;

class Vehicle
{
 public:
  Vehicle()
  {
   cout<< "\nThis is a vehicle" <<endl;
  }
};

class FourWheeler
{
 public:
  FourWheeler()
  {
   cout<< "\nThis is a four-wheeler" <<endl;
  }
};

class Car: public Vehicle, public FourWheeler
{
 
};

int main()
{
 Car c1;
}
