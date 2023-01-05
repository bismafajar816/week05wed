#include <iostream>
#include <cmath>
using namespace std;

main()
{
 int volume;
 int flow1,flow2;
 int hours;
 cout<<"total volume of pool:";
 cin >> volume;
 cout <<"flow rate of pipe 1:";
 cin >> flow1;
 cout <<"flow rate of pipe 2:";
 cin >> flow2;
 cout<<"number of hours when worker is absent:";
 cin >> hours;
 int P1 = hours*flow1;
 int P2 = hours * flow2;
 int total = P1 + P2;
 if(total <= volume)
 {
   float percent = total*100 / volume;
   float percent1 = P1 / total * 100;
   float percent2 = P2 / total* 100;
   cout<<"pool is "<<percent<<"filled"<<"contribution of pipe 1:"<<P1 <<"contribution of pipe 2:"<<P2<<endl;
 
 }
 if(total > volume)
 {
  int overflow = total - volume;
  cout<<"pool is overfilled in "<<hours <<"hours "<< overflow <<" is the overflow in liters.";
 }
}