#include <iostream>
#include <cmath>
using namespace std;
float positivequad(int a, int b , int c);
float negativequad(int a, int b, int c);
main()
{
 int a , b ,c;
 cout <<"enter number a:";
 cin >>a;
 cout <<"enter number b:";
 cin >>b;
 cout <<"enter number c:";
 cin>> c;
 float positivex = positivequad(a,b,c);
 cout <<"x is:"<<positivex;
 float negativex = negativequad(a,b,c);
 cout <<"x is :"<<negativex ;
}
float positivequad(int a, int b,int c)
{
 float power;
 power = pow(b,2);
 float e = 4*a*c;
 int d = power - e;
 float f = sqrt(d);
 float g = -b + f;
 float h = g/10;
 return h;

}
float negativequad(int a, int b, int c)
{

 float power;
 power = pow(b,2);
 float e = 4*a*c;
 int d = power - e;
 float f = sqrt(d);
 
 float i = -b - f;
 float j = i/10;
 return j;
}