/*
  Owen Kelley
  2 - 2 - 2022
  1720 - 01
  home/studets/okelley/cscs1720/labs/lab5/hybridTypeImp.cpp
*/

  #include<iostream>
  #include<string> 
  #include"autoType.h"
  #include"hybridType.h"

  using namespace std;
///////////////////////////////////////////////////////
  void hybridType::setChargeLevel(double electricGas)
  {
   if(electricGas >= 0 && electricGas <= 100)
   { 
    charge = electricGas;
   } 
   else
   {
    charge = 0;
   }
  }
////////////////////////////////////////////////////////
  double hybridType::getChargeLevel() const
  {
   return charge;
  }
////////////////////////////////////////////////////////
  void hybridType::setChargeEfficiency(double electricEff)
  {
   if(electricEff >= 5 && electricEff <= 95)
   {
    electricEfficiency = electricEff;
   }
   else
   {
    electricEfficiency = 0;
   }
  }
////////////////////////////////////////////////////////
  double hybridType::getChargeEfficiency() const
  {
   return electricEfficiency;
  }
////////////////////////////////////////////////////////
/*
  I didnt see the note on the lab until after I finished these
*/
  string hybridType::createDash() const
  {
   string dash;
   dash = autoType::createDash() + ", Hybrid Charge = " + to_string(charge) + ", Efficiency (miles per 1 percent) = " + to_string(electricEfficiency);
   
   return dash;
  }
////////////////////////////////////////////////////////
/*
  hybridType::hybridType(double electricGas, double electricEff)
  {
   if(electricGas >= 0 && electricGas <= 100)
   {
    charge = electricGas;
   }
   else
   {
    charge = 0;
   }
   if(electricEff >= 5 && electricEff <= 95)
   {
    electricEfficiency = electricEff;
   }
   else
   {
    electricEfficiency = 0;
   }
  }
///////////////////////////////////////////////////////
  hybridType::hybridType()
  {
   charge = 0;
   electricEfficiency = 0;
  }
*/
