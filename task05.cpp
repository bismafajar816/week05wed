#include <iostream>
#include <cmath>
int timeM( int minutes);
int timeH(int hours, int minutes);
using namespace std;
main()
{
 int hours, minutes;
 cout <<"enter hours:";
 cin >>hours;
 cout<<"enter minutes:";
 cin >> minutes;
      
 int newtimeM =timeM(minutes);
 int newtimeH =timeH(hours,minutes);
  
 cout <<"new time is :"<<newtimeH<<"hours"<<"and"<<newtimeM<<"minutes";
}
int timeM( int minutes)
{
 int newminute;
 newminute = minutes + 15;
 if(newminute > 45)
 {
  int newminutes = newminute % 10;
  return newminutes;
 }
}
int timeH(int hours, int minutes)
{

 int newhour;


   if(hours >= 0)
   {
    if(minutes > 45)
    {
    newhour = hours + 1;
     return newhour;  
    }
   }


}