#include<iostream>
#include<cmath>
#define _USE_MATH_DEFINES
using namespace std;
class Area
{
private:
int side;
int length,breadth;
float radius;
public:
Area(){
}
int Area_Rectangle(int ,int );
int Area_Square(int );
float Area_Circle(float );
};

int Area::Area_Rectangle(int l,int b)
{
 return l*b;
}

int Area::Area_Square(int s)
{
 return s*s;
}

float Area::Area_Circle(float r)
{
 return M_PI*r*r;
}

int main()
{
 Area A;
 int l,b,s,r;
 cout<<" Enter the length and breadth of the rectangle:\n";
 cin>>l>>b;
 cout<<" \nThe area of the rectangle is:\n "<<A.Area_Rectangle(l,b);
 cout<<" \nEnter the side of the square:\n";
 cin>>s;
 cout<<" \nThe area of the square is:\n "<<A.Area_Square(s);
 cout<<"\nEnter the radius of the circle:\n";
 cin>>r;
 cout<<" \nThe area of the circle is:\n"<<A.Area_Circle(r);
}
