#include <iostream>
#include <cmath>
using namespace std;
int symmetrical(int number1);

main()
{
 int number1;
 cout <<"enter a 3 digit number:";
 cin>> number1;
 bool issymmetrical;
 issymmetrical = symmetrical( number1);
 if(issymmetrical == true)
 {
  cout<<"is symmetrical";
 }

 if(issymmetrical == false)
 {
  cout<<"is not symmetrical";
 }
}
int symmetrical(int number1)
{
 int a = number1 % 10;
 int b = number1 / 10 ;
 int c = b % 10;
 int d = b /10;
 if (a == d )
 {
  return true;
 }
 if (a != d)
 {
 return false;
 }
 return 0;



}
