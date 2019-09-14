#include<iostream>
using namespace std;
class Player
{
 private:
 int runs,wickets;
 public:
 Player(int r,int w)
 {
  r=runs;
  w=wickets;
 }
  Player(const Player &p,int w=0)
  {
   runs=p.runs;
   wickets=w;
  }

 int getRuns()
 {
  return runs;
 }

 int getWickets()
 {
  return wickets;
 }
};


int main()
{
 Player p1( 100, 2);
 Player p2=p1;
 cout<<" Player 1 runs: "<<p1.getRuns()<<" and wickets: "<<p1.getWickets()<<endl;
 cout<<" Player 2 runs: "<<p2.getRuns()<<" and wickets: "<<p2.getWickets()<<endl;
}
  
