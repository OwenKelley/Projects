/*
  Owen Kelley
  2 - 2 - 2022
  1720 - 01
  home/studets/okelley/cscs1720/labs/lab5/autoType.h
*/
  #ifndef autoType_H
  #define autoType_H
//  #include "hybridType.h" 
  #include <string>
  #include <iomanip>
  using namespace std;
////////////////////////////////////////////////////////////////
  class autoType
  {
   public:
/*
  setvalues - Sets values to assigned numbers, if unrealistic assignment,then set values to 0

  precondition - takes in values assigned for miles, gallons, and mpg
  postcondition- assigns values to miles, gallons, mpg
*/
    void setValues(double = 0, double = 0, double = 0);
/*
  createDash - outputs the odometer, fuel level, and the efficiency

  precondition - takes in miles, gallons, and mpg to convert them to strings
  postcondition - returns a string to output in main
*/
    string createDash() const;
/*
  drive - takes in values of the current trip and adjusts the odometer and the fuel level

  precondition - inputs the miles of the current trip
  postcondition - increases the odometer and decreases the fuel level based on the miles driven in the current trip 
*/
    void drive(double);
/*
  autoType (parameterized) constructor - refer to setValues 
*/
    autoType(double, double, double);
/*
  autoType default constructor - refer to parameterized autoType 
*/
    autoType();

   private:
    double miles;
    double gallons;
    double mpg; //Miles Per Gallon
  };
 
  #endif
