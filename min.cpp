#include<iostream>
using namespace std;
int main()
{
 int l,m,n,min;
 cout<<"Enter any three numbers:\n";
 cin>>l>>m>>n;
 min=l<m?(l<n?l:n):(m<n?m:n);
 cout<<min<<" is the smallest number";
}
