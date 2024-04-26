/*
   Owen Kelley
   csc1710-03
   Dr Wei
   LAB 9 - Writing Functions
*/
   #include<string>
   #include<iostream>
   #include<iomanip>
   using namespace std;

  int updateSales(int x, int y);
  double profit(int x, double y);
  void printInfo(string x, string y, int boxSold);

 
  int main()
 {
   int weeks;
   int week1;
   int week2;
   int firstTotal;
   int secondTotal;
   string A;
   string B;
   string C;
   string D;
   int num;
   int x;
   int n = 1;
   int z;
   int total = 0;
   double boxPrice;
// 
   cout<<"Enter First Member's First Name:  ";
   cin >> A;
   cout<<"Enter Their Last Name:  ";
   cin >> B;
    cout<<"Enter Second Member's First Name:  ";
   cin >> C;
   cout<<"Enter Their Last Name:  ";
   cin >> D;

   cout<<"Box Price: ";
   cin >> boxPrice;

   cout<<"How many weeks?"<<endl;
   cin >> weeks;

   for(x=1 ; x <= weeks*2 ; ++x)
   {
    if(x <= weeks)
    {
     cout<<"Number of Boxes Sold by " <<A<<" "<<B<<" during week "<< x <<": ";
     cin>>week1;
     cout << endl;
//     cout << updateSales(week1, total)<< endl;
     total = updateSales(week1, total);
     if(x == weeks)
     {
      printInfo(A, B, total);
     }
     firstTotal = total;
    }
    else
    {
     cout<<"Number of Boxes Sold by " <<C<<" "<<D<<" during week "<< x-weeks <<": ";
     cin>>week2;
     cout << endl;
//     cout << updateSales(week2, total)<<endl;
     total = updateSales(week2, total);
     secondTotal = total - firstTotal;
     if(x == weeks * 2)
     {
      cout<<endl;
      printInfo(C, D, secondTotal);
     }
    }
   }

  cout << "Total Profit = $" << profit(total, boxPrice) << endl;

  return 0;
 }
//INT FUNCTION
   int updateSales(int x, int y)
   { 
    int total;
    total = x + y;
    return total;
   }
//VOID FUNCTION
   void printInfo(string x, string y, int boxSold)
   {
    cout<< "Member name: " << x <<" "<< y << ", Total boxes sold: " << boxSold <<endl; 
   }
//DOUBLE FUNCTION
   double profit(int x, double y)
   {
    int z;
    //x = total boxes sold
    //y = box price
    z = (x*y);
    return z;
   }


