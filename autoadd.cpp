#include<iostream>
using namespace std;
int main()
{
 auto sum = [](auto a, auto b)
 {
  return a+b;
 };

//Find the sum of two integers
cout<<sum(1,6)<<endl;

//Find the sum of two floating numbers
cout<<sum(1.0,5.6)<<endl;

//Find the sum of strings
cout<<sum(string("Athithya"),string("Narayan"))<<endl;

return 0;
}
//use g++ -std=c++17 autoadd.cpp -o autoadd
