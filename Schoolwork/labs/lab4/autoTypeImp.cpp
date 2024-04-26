/*
  Owen Kelley
  2 - 2 - 2022
  1720 - 01
  home/studets/okelley/cscs1720/labs/lab4/autoTypeImp.cpp
*/
  #include<iostream>
  #include<string>
  #include"autoType.h"
  using namespace std;
///////////////////////////////////////////////////////
/*
  setvalues - Sets values to assigned numbers, if unrealistic assignment,then set values to 0

  precondition - takes in values assigned for miles, gallons, and mpg
  postcondition- assigns values to miles, gallons, mpg
*/
  void autoType::setValues(double mil, double gal, double efficiency)
  {
   if(mil >= 0)
   {
    miles = mil;
   }
   else
   {
    miles = 0;
   }
   if(gal >= 0)
   {
    gallons = gal;
   }   
   else 
   {
    gallons = 0;
   }
   if(efficiency > 0)
   {
    mpg = efficiency;
   }
   else
   {
    mpg = 0;
   }
  }
////////////////////////////////////////////////////////
/*
  createDash - outputs the odometer, fuel level, and the efficiency

  precondition - takes in miles, gallons, and mpg to convert them to strings
  postcondition - returns a string to output in main
*/  
  string autoType::createDash()
  {
   string Dash;
   Dash = "Odometer = " + to_string(miles) + ", Fuel Level = " + to_string(gallons) + ", Efficiency = " + to_string(mpg);
   
   return Dash;
  }
////////////////////////////////////////////////////////
/*
  drive - takes in values of the current trip and adjusts the odometer and the fuel level

  precondition - inputs the miles of the current trip
  postcondition - increases the odometer and decreases the fuel level based on the miles driven in the current trip 
*/
  void autoType::drive(double currentTrip)
  {
   double gal;
   if(currentTrip > 0)
   {
    gal= currentTrip / mpg;
    if((gallons - gal) > 0)
    {
     gallons = gallons - gal;
     miles = miles + currentTrip;
    }
    else
    {
     miles = currentTrip + (mpg * (gallons - gal)) + miles; 
     gallons = 0;
    }
    //MILES PER GALLON = Miles/Gallon
    // 40mpg = 40 miles per 1 gallon
    // 80 miles / 40 miles = 2 gal
   }
   
  }
//////////////////////////////////////////////////////// 
  autoType::autoType(double mil, double gal, double efficiency)
  {
   if(mil >= 0)
   {
    miles = mil;
   }
   else
   {
    miles = 0;
   }
   if(gal >= 0 && gal < 50)
   {
    gallons = gal;
   }
   else
   {
    gallons = 0;
   }
   if(efficiency > 0 && efficiency < 95)
   {
    mpg = efficiency;
   }
   else
   {
    mpg = 0;
   }
  }
////////////////////////////////////////////////////////
  autoType::autoType()
  {
   miles = 0;
   gallons = 0;
   mpg = 0;
  }

