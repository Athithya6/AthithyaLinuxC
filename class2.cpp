#include<iostream>
using namespace std;
class Employee
{
 private:
  string ename;
  string ecode;
  int e_no_sales;
  double e_basic_sal;
  double ctc;

 public:
  Employee();
  void hra(double );
  void ctc_cal(double ,double ,int );
 };

Employee::Employee()
{
 ename = "Vijay";
 ecode = "0000";
 e_no_sales = 0;
 e_basic_sal = 0;
 ctc = 0;
}

void Employee::hra(double e_basic_sal)
{
 double ctc;
 double hra=0;
 hra=(0.3*e_basic_sal);
 cout<<"HRA="<<hra;
}

void Employee::ctc_cal(double e_basic_sal,double ctc,int e_no_sales )
{
 double hra=0;
 if(e_basic_sal+hra>500000)
 {
  ctc=ctc+100000;
 }
 if(e_no_sales>2000000)
 {
  ctc=ctc+(0.1*ctc);
 }
 
}

int main()
{
 Employee e;
 e.hra(1000000.00);
 e.ctc_cal(1000000.00,100000,5000);
}



 

 
