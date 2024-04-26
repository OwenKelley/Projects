/*
  Owen Kelley
  3 - 18 - 2022
  1720 - 01
  home/studets/okelley/cscs1720/labs/lab9/lab9.cpp

  About: Recursive program to calculate exponents

  Compiling instructions: g++ lab9.cpp
*/

#include <iostream>
#include <string>

using namespace std;

double repower(int j, int k);

int main()
 {
  int j, k;
  bool exit = false;
  char E;
  cout << endl; 
  while(cin && exit != true)
  {
   cout <<"Enter Base number (positive) then the exponent"<< endl;
   cin >> j;
   while(j<0)
   {
    cout <<"Enter a **positive** base number then the exponent"<<endl;
    cin >> j;
   }
   cin >> k;

   cout << j <<" power "<< k <<" = "<< repower(j, k) << endl << endl;
   cout <<"Would you like to exit? (y/n)" << endl;
   cin >> E;
   if(E == 'y')
   {
    exit = true;
   }
  }
  return 0;
 }
/////////////////////////////////////////////////
double repower(int j, int k)
 {
  double end;
  if(k < 0)
  {
   k = k * -1;
   if(k == 1)
   {
    end = 1/repower(j,k);
   }
   else
   {
    end = 1/(j * repower(j,k-1));
   }
  }
/////////////////////////////////////
  else if(k == 0)
  {
   end = 0;
  } 
  else if(k == 1)
  {
   end = j;
  }
  else
  {
   end = j * repower(j,k-1);
  }
  return end;
 }
