#include<iostream>
using namespace std;

class Base
{
protected:
int x;
public:
virtual void fun()=0;

Base(int i) {x=1;}
};

class Derived:public Base
{
 int y;
 public:
 Derived(int i,int j):Base(i) {y=j;}
 void fun() 
 {
  cout<<" x= "<<x;
 }
};

int main(void)
{
 Derived d(4,5);
 d.fun();
 return 0;
}
