#include<iostream>
using namespace std;

template <typename T>
T mymax(T x, T y)
{
 return (x>y)?x:y;
}

int main()
{
 cout<<mymax<int>(125,140)<<endl;
 cout<<mymax<float>(9.3,9.5)<<endl;
 cout<<mymax<char>('y','x')<<endl;
 return 0;
}
