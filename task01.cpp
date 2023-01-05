#include <iostream>
#include <cmath>
using namespace std;
float height(float degree, int base);

main()
{
 int degree ;
 float rad;
 int base;
 float calheight;

 cout <<"enter degrees:";
 cin>> degree;
 cout<<"enter base value:";
 cin>> base;

 calheight = height(degree, base);
 cout <<"height is:"<<calheight;
}
float height(float degree, int base)
{
 //int degree =0;
 float rad=0;
// int base=0;
 rad = degree /57.2958;
 float tangent = tan(rad);
 float h = tangent * base;
 return h;
}