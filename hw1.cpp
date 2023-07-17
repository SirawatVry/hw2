#include <iostream>
using namespace std;
int main()
{ int withdraw;
  int remain;
  int b1000;
  int b500;
  int b100;
  int b50;
  int b20;
 cout << "Enter withdraw : ";
 cin  >> withdraw;
 b1000 = withdraw / 1000;
 remain = withdraw % 1000;
 b500  = remain / 500 ;
 remain = remain % 500;
 b100 = remain/100;
 remain = remain%100;
 b50 = remain /50;
 remain = remain%50;
 b20 = remain/20;
 cout << "b1000 : "<< b1000 <<"\nb500 : "<< b500 <<"\nb100 : " << b100 <<"\nb50 : "<< b50 <<"\nb20 : "<< b20 <<endl;
 return(0);
}



