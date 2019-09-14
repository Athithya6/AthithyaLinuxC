#include<iostream>
using namespace std;

int maximum(int n1,int n2,int n3);

int main()
{
 int a,b,c;
 cout<<"Enter any three numbers:\n";
 cin>>a>>b>>c;
 maximum(a,b,c);
}

int maximum(int p,int q,int r)
{
 if(p>q&&p>r)
 {
  cout<<p<< "is the greatest number";
 }
 else if(q>p&&q>r)
 {
  cout<<q<< "is the greatest number";
 }
 else
 {
  cout<<r<< "is the greatest number";
 }
}
