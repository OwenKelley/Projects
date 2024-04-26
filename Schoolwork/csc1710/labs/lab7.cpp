/*
   Owen Kelley
   csc1710-03
   Dr Wei
   LAB 7 - Temp Conversion
*/

   #include<iostream>
   #include<iomanip>
   #include<string>
   using namespace std;

   int main(void)
 {
//Variables
   double far;
   double cel;
   double kel;
   double stopFar;

//USER INPUT
   cout <<endl;
   cout << "What is the temperature fahrenheit (below 100,000)?" << endl 
        << "NOTE: Table will have max of 50 lines" << endl << endl;
   cin >> far;

//CONVERSIONS
   cel = (far - 32) / (1.8);
   kel = cel + 273.15;
//STOP FAR LOOP
   stopFar = far + 51;

//NONLOOP
   cout<<setw(2) << "|" << setw(11) << "    °F   ";
   cout<<setw(2) << "|" << setw(11) << "    °C   ";
   cout<<setw(2) << "|" << setw(10) << "     K   ";
   cout<<setw(2)<< "|"<<endl;
   cout <<setw(2) << "|" << setw(11)<<"====="  "=========="  "=========="  "=========="<< "|" << endl;

//LOOP
   while(far <= 100000 && far != stopFar)
   {
    cel = (far - 32) / (1.8);
    kel = cel + 273.15;
    cout<<fixed;
    cout<<setw(2) << "|" << setw(10) << setprecision(3) << far;
    cout<<setw(2) << "|" << setw(10) << setprecision(3) << cel;
    cout<<setw(2) << "|" << setw(10) << setprecision(3) << kel;
    cout<<setw(2)<< "|"<<endl;
    far++;
   }

  return 0;
 }
