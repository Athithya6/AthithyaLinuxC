#include<iostream>
using namespace std;
void a(void );
void b(void );
void c(void );
int x=1;

int main()
{
 int x=5;
 cout<<"\nlocal x in outer scope of main is"<<x;
 {
  int x=7;
  cout<<"\nlocal x in inner scope of main is"<<x;
 }
 cout<<"\nlocal x in outer scope of main is"<<x;
 a();
 b();
 c();
 a();
 b();
 c();
}

void a(void )
{
 int x=25;
 cout<<endl<< "\nlocal x in a is " <<x<<" after entering a"<<endl;
 ++x;
 cout<<"\nlocal x in a is "<<x<< " before exiting a" << endl;
}

void b(void )
{
 static int x=50;
 cout<<endl<<"\nlocal static x is "<<x<<" on entering b"<<endl;
 ++x;
 cout<<"\nlocal static x is "<<x<<" on exiting b"<<endl;
}

void c(void )
{
 cout<<endl<<"\nglobal x is "<<x<<" on entering c"<<endl;
 x*=10;
 cout<<"\nglobal x is "<<x<<" on exiting c";
}
