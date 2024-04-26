/*
  Owen Kelley
  2 - 2 - 2022
  1720 - 01
  home/studets/okelley/cscs1720/labs/lab4/autoType.h
*/  
  #include <string>
  #include <iomanip>
  using namespace std;
////////////////////////////////////////////////////////////////
  class autoType
  {
   public:
    void setValues(double = 0, double = 0, double = 0);
    string createDash();
    void drive(double);
    autoType(double, double, double);
    autoType();
   private:
    double miles;
    double gallons;
    double mpg; //Miles Per Gallon
  };
