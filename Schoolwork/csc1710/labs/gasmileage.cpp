   

   #include<iostream>
   #include<iomanip>
   #include<string>
   using namespace std;

  double gasMileage(double x, double y);

  int main()
 {
  double miles;
  double gallons;

  cout << "Enter miles: "<< endl;
  cin>>miles;
  cout << "Enter gallons: " << endl;
  cin>>gallons;

  cout << gasMileage(miles, gallons) <<endl;

  return 0;
 }

 double gasMileage(double x, double y)
 {
  double Mileage;
  Mileage = x / y;
  return Mileage;
 }
