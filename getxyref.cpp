#include<iostream>
using namespace std;

class Point{
private:
int x,y;
public:
Point(int x1,int y1) {x=x1;y=y1;}
//Copy constructor
Point(const Point&p2) {x=p2.x;y=p2.y;}
  int getx() {return x;}
  int gety() {return y;}

private:
        int month;
        int day;
        int year;
};

int main()
{
Point p1(10,15);

cout<<"p1.x="<<p1.getx();

return 0;

}
