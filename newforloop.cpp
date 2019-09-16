#include<iostream>
using namespace std;

int main()
{
 int arr[]={10,20,30,40};

 for(int x:arr)
 {
  cout<<x<<endl;
 }
}
//use g++ -std=c++11 newforloop.cpp -o newforloop
