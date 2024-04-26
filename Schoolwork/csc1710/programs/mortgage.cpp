/*
  Owen Kelley
  csc1710-03
  Dr Wei
  Program #2: Mortgage Calculator
*/

  #include<iostream>
  #include<iomanip>
  #include<cmath>
  using namespace std;

  int main(void)
{
//Integers
  int x;
  int X;
  int w;
  int i;
  int c = 0;
  int paymentNumber = 1;
//Doubles
  double purchasePrice;
  double interestPayment;
  double months;
  double monthPayment;
  double annIntRate;
  double principalBal = 1;
  double principalPayment;
  double oneTwelfth;
  double twelve = 12;
  double one = 1;
  double calMonthPay;
  double dwnPaymentPercent;
  double downPayment;
  double PMI;
  double origPMIpayment;
  double PMIpayment;
  double totalInterest = 0;
  double totalPMI = 0;
  double monthIntRate;
  double powInt;
  double counter;
  double annPayment;
//
  oneTwelfth = one/twelve;

//USER INPUT
  cout << "What is the purchase price?" << endl;
  cin >> purchasePrice;
//EXTRA 5% INPUT CHECKING 
  if(purchasePrice < 0)
  {
   while(purchasePrice < 0)
   {
   cout << "Error: Invalid input" << endl;
   cin >> purchasePrice;
   }
  }
  cout << "What is the annual interest rate percentage?" << endl;
  cin >> annIntRate;
  cout << "What is the number of monthly payments?" << endl;
  cin >> months;
//EXTRA 5% INPUT CHECKING
  if(months <= 0)
  {
   while(months <= 0)
   {
   cout << "Error: Invalid input" << endl;
   cin >> months;
   }
  }

//  cout << "What is the monthly payment amount?" << endl;
//  cin >> monthPayment;
  cout << "What is the down payment percentage? \nIf no down payment type, '-1'" << endl;
  cin >> dwnPaymentPercent;
  if(dwnPaymentPercent < -1)
  {
   while(dwnPaymentPercent < -1)
   {
   cout << "Error: Invalid input" << endl;
   cin >> dwnPaymentPercent;
   }
  }

  if(dwnPaymentPercent != -1)
  {
   if(dwnPaymentPercent > 0)
   {
    downPayment = purchasePrice * (dwnPaymentPercent * 0.01);
    purchasePrice = purchasePrice - downPayment;
   }
  }
//Non-Loop Calculations  
  principalBal = purchasePrice;
  annIntRate = annIntRate * .01;    
  monthIntRate = (annIntRate/12);
  powInt=1+monthIntRate;
  calMonthPay= (purchasePrice * (monthIntRate* pow(powInt,months))) / (pow(powInt, months)-1);
  annPayment = (calMonthPay * 12);

//HEADER START
  cout << endl;
  w = 0;
  cout << setw(2) << "|";
    while(w <= 88)
      {
       cout << "=";
       w = w + 1;  
      }
  cout << "|" << endl;

// COLUMNS @ # AND $ SHOULD HAVE PERCENT OR $$$
   cout << setw(2) << "|" 
        << setw(16) << "Payment Number" << setw(2) << "|"
        << setw(16) << "Interest Payment" << setw(2) << "|"
        << setw(18) << "Principal Payment" << setw(2) << "|"
        << setw(18) << "Principal Balance" << setw(2) << "|"
        << setw(12) << "PMI Payment" << setw(2) << "|" << endl;
   cout << setw(2) << "|" << "================" << 
                      "|" << "==================" <<
                      "|" << "===================" <<
                      "|" << "===================" << 
                      "|" << "============="<< "|" << endl;

//PMI Percentage Assignments
  if(dwnPaymentPercent != -1)
  {
    if(dwnPaymentPercent < 20)
    {
     if(dwnPaymentPercent >= 0 && dwnPaymentPercent < 5)
     {
      PMI = 1.030;
     }
     else if(dwnPaymentPercent >=5 && dwnPaymentPercent < 10)
     {
      PMI = 0.875;
     }
     else if(dwnPaymentPercent >= 10 && dwnPaymentPercent < 15)
     {
      PMI = 0.675;
     }
     else if(dwnPaymentPercent >= 15 && dwnPaymentPercent < 20)
     {
      PMI = 0.375;
     }
    }
   else
   {
    PMI = 0;
   }

   PMIpayment = PMI * 0.01 * annPayment;
   origPMIpayment = PMIpayment;
  }

  
//Calculation LOOP
   for(int n=1 ; n <= months ; n++)
   {
    interestPayment = monthIntRate * principalBal;
    principalPayment = calMonthPay - interestPayment;
    principalBal = principalBal - principalPayment;

    totalInterest = totalInterest + interestPayment;

//PMI Payment Counter 
    if(principalBal > (purchasePrice*0.8))
    {
     c = c + 1;
    }
 
//Principal Balance Zero-er
    if(principalBal < 0)
    {
     principalBal = 0; 
    }
//PMI Cutoff after 80%
    if(principalBal <= (purchasePrice*0.8))
    {
     counter = c;
     PMIpayment = 0;
    }
    
    if(dwnPaymentPercent == -1)
    {
     PMIpayment = 0;
    }
    cout << setw(2) << "|"
         << setw(15) << n << setw(2) << "|"
     /*17*/    << setw(17) <<interestPayment << setw(2) << "|"
     /*18*/    << setw(18) <<principalPayment << setw(2) << "|"
     /*18*/    << setw(18) <<principalBal << setw(2) << "|"
     /*12*/    << setw(12) <<PMIpayment << setw(2) << "|" << endl;
   }
//OUT OF FIRST LOOP

    if(dwnPaymentPercent != -1)
    {
      totalPMI = origPMIpayment * counter;
    }

//OUTPUT
    cout << setw(2) << "|" << "================" <<
                       "|" << "==================" <<
                       "|" << "===================" <<
                       "|" << "===================" <<
                       "|" << "============="<< "|" << endl;

/*                          
    cout << setw(2) << "|"
         << setw(15) << "Totals: "<< setw(2) << "|"
         << setw(17) << totalInterest << setw(2) << "|"
         << setw(18) <<"     Cost = " << (totalInterest + purchasePrice) << setw(2) << "|"
         << setw(18) << principalBal << setw(2) << "|"
         << setw(12) << totalPMI << setw(2) << "|" << endl;
*/


   cout << "Total Interest           = $" << totalInterest << endl;
   cout << "Total Cost (without PMI) = $" << (totalInterest + purchasePrice) << endl;
   cout << "Total PMI Payment        = $" << totalPMI << endl;
   cout << "Total Cost               = $" << (totalInterest + purchasePrice + totalPMI) << endl;
   cout << endl << endl << endl << endl;

   dwnPaymentPercent = 0;
   totalPMI = 0;

  return 0;
}
