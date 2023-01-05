#include <iostream>
#include <cmath>
int isevenish(int number1);

using namespace std;
main()
{
 int number1;
 cout<<"enter a five digit number:";
 cin>>number1;
 bool istrue = isevenish( number1);
 if(istrue == true )
 {
  cout <<"number is evenish";
 }
 if(istrue == false)
 {
  cout<<"number is oddish";
 }

}
int isevenish(int number1)
{
 int a = number1 % 10;
 int b = number1 / 10;
 int c = b% 10;
 int d = b/10;
 int e = d%10;
 int f = d/10;
 int g = f%10;
 int h = f / 10;
 int i = a+ c+ e+ g+h;
 int j = i % 2;
 if(j == 0)
 {
  return true;
 }
 if(j != 0)
 {
  return false;
 } 
return 0; 
}