#include<iostream>
using std::cout;
using std::endl;

struct Time
{
 int hour;
 int minute;
 int second;
};

void printMilitary( const Time &);
//void printStandard( const Time &);

int main()
{
 Time dinnertime;
 dinnertime.hour=18;
 dinnertime.minute=30;
 dinnertime.second=0;
 
 cout<<"Dinner will be held at: \n";
 printMilitary(dinnertime);
 cout<< "military time,\n which is ";
 //printStandard(dinnertime);
 //cout<<"Standard time:\n";

 dinnertime.hour=29;
 dinnertime.minute=73;
 
 cout<<"\nTime with invalid values:";
 printMilitary(dinnertime);
 cout<<endl;
}

void printMilitary(const Time &t)
{
 cout<< (t.hour < 10 ? "0" : "" ) << t.hour << ":"
     << (t.minute <10 ? "0" : "") << t.minute;
}


