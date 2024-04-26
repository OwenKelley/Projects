/*
   Owen Kelley
   csc1710-03
   Dr Wei
   LAB 10 - Writing Functions
*/

  #include<string>
  #include<iostream>
  #include<iomanip>
  #include<cmath>
  using namespace std;

  double DISTANCE(double corda, double cordb, double cordc, double cordd);
  double DISTANCE(double corda, double cordb);
  double RADIUS(double corda, double cordb, double cordc, double cordd);
  double RADIUS(double corda, double cordb);
  double circumference(double radius);
  double AREA(double radius);
  double PI = 3.1415;
//  void printInfo(string x, string y, int boxSold);


  int main()
  {
   double corda;
   double cordb;
   double cordc;
   double cordd;

   cout << "Enter x and y value of the first coordinate" << endl;
   cin >> corda;
   cin >> cordb;
   cout << "Enter x and y value of the next coordinate" << endl;
   cin >> cordc;
   cin >> cordd;

   cout << "Distance between point x and y = "<< DISTANCE(corda, cordb, cordc, cordd) << endl;
   cout << "Distance Default Zero = " << DISTANCE(corda, cordb) << endl;
   cout << "Radius = " << RADIUS(corda, cordb, cordc, cordd) << endl;
   cout << "Radius Default Zero = " << RADIUS(corda, cordb) << endl;
   cout << "Circumference = " << circumference(RADIUS(corda, cordb, cordc, cordd)) << endl;
   cout << "Area = " << AREA(RADIUS(corda, cordb, cordc, cordd)) << endl;
  }

/////////////////////////////////////////////////////////////////////////


//DISTANCE FUNCTION
  double DISTANCE(double corda, double cordb, double cordc, double cordd)
  {
   double coord1; //squared value
   double coord2; //squared value
   double wosqrt;

   coord1 = pow(corda,2) - pow(cordb,2);
   coord2 = pow(cordc,2) - pow(cordd,2);  
   wosqrt = coord1 + coord2;
   wosqrt = sqrt(wosqrt);

   return wosqrt;
  }
//DISTANCE FUNCTION DEFAULT ZERO
  double DISTANCE(double corda, double cordb)
  {
   double coord1;
   double coord2;
   double wosqrt;
   coord1 = pow(corda,2) - pow(cordb,2);
   coord2 = pow(0,2) - pow(0,2);
   wosqrt = coord1 + coord2;
   wosqrt = sqrt(wosqrt);
   return wosqrt;
  }


//RADIUS FUNCTION
  double RADIUS(double corda, double cordb, double cordc, double cordd)
  {
   double radius;
   radius = DISTANCE(corda, cordb, cordc, cordd);

   return radius;
  }
//RADIUS FUNCTION DEFAULT ZERO
  double RADIUS(double corda, double cordb)
  {
   double radius;
   radius = DISTANCE(corda, cordb);
 
   return radius;
  }


//CIRCUMFERENCE FUNCTION
  double circumference(double radius)
  {
   double circumf;
   circumf = 2 * PI * radius;

   return circumf;
  }


//AREA FUNCTION
  double AREA(double radius)
  {
   double area;
   area = PI * pow(radius, 2); 
  
   return area;
  }





