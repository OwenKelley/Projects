
/*
1710 2:00pm class
Owen Kelley
Dr Wei
Lab 2
*/

#include<iostream>
using namespace std;

int main(void)

{
  int oneDollarBills;
  int fiveDollarBills;
  int tenDollarBills;
  int twentyDollarBills;
  int finalvar1;
  int finalvar5;
  int finalvar10;
  int finalvar20;

  cout << "Enter number of $1 bills:" << endl;
  cin >> oneDollarBills; 
  cout << "Enter number of $5 bills:" << endl;
  cin >> fiveDollarBills;
  cout << "Enter number of $10 bills:" << endl;
  cin >> tenDollarBills;
  cout << "Enter number of $20 bills:" << endl;
  cin >> twentyDollarBills;

  finalvar1 = oneDollarBills;
  finalvar5 = fiveDollarBills * 5;
  finalvar10 = tenDollarBills * 10;
  finalvar20 = twentyDollarBills * 20;

  cout << "The total amount is " << finalvar1 + finalvar5 + finalvar10 + finalvar20 << " dollars." << endl;

  return 0;

}

