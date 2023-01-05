#include <iostream>
#include <cmath>
using namespace std;
main()
{
 int number;
 cout <<"enter a 2 digit number:";
 cin >> number;
 int firstd = number / 10;
 int secondd = number % 10;
 if (firstd== 1)
 {
  if(secondd == 1)
  {
  cout<<"eleven"<<endl;
  }  
  if(secondd == 2)
  {
  cout<<"twelve"<<endl;
  } 
  if(secondd == 3)
  {
   cout<<"thirteen"<<endl;
  }
  if(secondd == 4)
  {
   cout<<"fourteen"<<endl;
  }
  if(secondd == 5)
  {
   cout<<"fifteen"<<endl;
  }
  if(secondd == 6)
  {
   cout<<"sixteen"<<endl;
  }
  if(secondd == 7)
  {
   cout<<"seventeen"<<endl;
  }
  if(secondd == 8)
  {
   cout<<"eighteen"<<endl;
  }
  if(secondd == 9)
  {
   cout<<"nineteen"<<endl;
  }
 }
}