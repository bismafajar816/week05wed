#include <iostream>
using namespace std;
float divide(float number1 ,float number2);
int isGreater(int number1, int number2);
main()
{
 int number1;
 int number2;
 int greater;
 cout <<"enter number:";
 cin>>number1;
 cout<<"enter number:";
 cin>>number2;
 greater = isGreater(number1,number2);
 cout<<"greater is:"<<greater<<endl;
 cout<<"program ends";
}

int isGreater(int number1, int number2)
{
 if(number1 > number2)
  {   
   return number1;
  }
   
 if(number1 < number2)
 {  
   return number2; 
 }
 return 0;   
}