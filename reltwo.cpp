#include<iostream>
using std::cout;
using std::cin;
using std::endl;
int main()
{
 int n1,n2;
 cout<<"Enter two integers and I will tell you\n"
     <<"the relationships they staisfy:\n";
 cin>>n1>>n2;
 if(n1==n2)
 {
  cout << n1 << "is equal to " <<n2 << endl;
 }
 if(n1>n2)
 {
  cout << n1 << "is greater than" << n2 << endl;
 }
 if(n1<n2)
 {
  cout << n1 << "is lesser than" << n2 << endl;
 }
 if(n1<=n2)
 {
  cout << n1 << "is lesser than or equal to" << n2 << endl;
 }
}
