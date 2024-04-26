/*
  Owen Kelley
  2 - 2 - 2022
  1720 - 01
  home/studets/okelley/cscs1720/labs/lab5/hybridType.h
*/
  #include <string>
  #include <iomanip>
 
  #include "autoType.h"
  #ifndef hybridType_H
  #define hybridType_H
////////////////////////////////////////////////////////////////
  class hybridType: public autoType
  {
   public:
/*
  setChargeLevel - sets the private variable charge

  precondition - takes in a value for charge between 0 - 100
  postcondition - sets charge to specified value
*/
   void setChargeLevel(double = 0);
////////////////////////////////////////////////////////////////
/*
  getChargeLevel

  precondition - takes in no values
  postcondition - returns current charge
*/
   double getChargeLevel() const;
////////////////////////////////////////////////////////////////
/*
  setChargeEfficiency - sets the private variable for electricEfficiency

  precondition - takes in a value between 5 and 95
  postcondition - sets electricEfficiency to specified value
*/
   void setChargeEfficiency(double = 1);
////////////////////////////////////////////////////////////////
/*
  getChargeEfficiency

  precondition - takes in no values
  postcondition - returns current electric efficiency
*/
   double getChargeEfficiency() const;
////////////////////////////////////////////////////////////////
/*
   createDash - displays a string of information of the private variables of autoType and hybridType

   precondition - takes in the base class createDash
   postcondition - adds on the hybridType private variables onto the createDash base string
*/
   string createDash() const;
////////////////////////////////////////////////////////////////
/*
  hybridType (parameterized) constructor - unutilized constructor
*/
/*
    hybridType(double, double);
////////////////////////////////////////////////////////////////
  hybridType default constructor - unutilized constructor
    hybridType();
*/
   private:
    double charge;
    double electricEfficiency;
  };
  #endif
