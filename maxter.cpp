#include<iostream>
using namespace std;
int main()
{
 int p,q,r;
 cout<<"Enter any three integers:\n";
 cin>>p>>q>>r;
 int max,maxtemp;
 maxtemp=((p>q)?p:q);
 max=(maxtemp>r)?maxtemp:r;
 cout<<max<<" is the greatest number";
}
