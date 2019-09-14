#include<iostream>
using namespace std;
static int count=-1;
class Batsmen
{
 private:
 int runs;
 public: Batsmen()
 {
  count++;
 }
 void score();
 void ipl();
 void icc();
 void wcc();
 void odi();
};


void Batsmen::score()
{
  ipl();
  icc();
  wcc();
  odi();
}

void Batsmen::ipl()
{
 Batsmen b1[2];
}

void Batsmen::icc()
{
 Batsmen b2[3];
}

void Batsmen::wcc()
{
 Batsmen b3[5];
}

void Batsmen::odi()
{
 Batsmen b4[11];
}

int main()
{
 Batsmen batsman;
 Batsman.score();
 cout<<" Total no.of objects: "<<count<<endl;
}


