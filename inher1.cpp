#include<iostream>
using namespace std;

class Parent
{
 public:
 int id_p;
};
class child : public Parent
{
public:
int id_c;
};

int main()
{
child obj1;
obj1.id_c=7;
obj1.id_p=91;
cout<< " child id is: "<<obj1.id_c<<endl;
cout<< " parent id is: "<<obj1.id_p<<endl;
} 


