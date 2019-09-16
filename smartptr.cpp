#include<iostream>
using namespace std;

class smartptr
{
int *ptr;//Actual pointer
public:
explicit smartptr(int *p=NULL) {ptr=p;} //for use of explicit keyword
~smartptr() {delete(ptr);} //destructor
int &operator*() {return *ptr;} //overloading dereferencing pointer
};

int main()
{
 smartptr ptr(new int());
 *ptr=20;
 cout<<*ptr;
 return 0;
}
