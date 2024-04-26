/*
  Owen Kelley
  2 - 2 - 2022
  1720 - 01
  home/studets/okelley/cscs1720/labs/lab5/hybridType.h
*/
  #include<string>
  #include<iomanip>

  #include "autoType.h"
  #ifndef hybridType_H
  #define hybridType_H
////////////////////////////////////////////////////////////////
  class hybridType: public autoType
  {
   public:
/*
  setChargeLevel

  precondition - 
  postcondition - sets charge to specified value
*/
   void setChargeLevel(double = 0);
////////////////////////////////////////////////////////////////
/*
  getChargeLevel

  precondition - takes in no values
  postcondition - returns current charge
*/
   double getChargeLevel();
////////////////////////////////////////////////////////////////
   void setChargeEfficiency(double);
////////////////////////////////////////////////////////////////
/*
  getChargeEfficiency

  precondition - takes in no values
  postcondition - returns current electric efficiency
*/
   double getChargeEfficiency();
////////////////////////////////////////////////////////////////
/*
  autoType (parameterized) constructor - refer to setValues 
*/
//    hybridType(double, double);
////////////////////////////////////////////////////////////////
/*
  autoType default constructor - refer to parameterized autoType 
*/
//    hybridType();
   private:
    double charge;
    double electricEfficiency;
  };
  #endif     
