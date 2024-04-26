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
  string hybridType::createDash() const
  {
   string dash;
   dash = autoType::createDash() + ", Hybrid Charge = " + to_string(charge) + ", Efficiency (miles per 1 percent) = " + to_string(electricEfficiency);
   
   return dash;
  }
////////////////////////////////////////////////////////
  void hybridType::hdrive(double currentTrip)
  { 
   double chrg; // charge used
   double rchrg; // recharge 
   double hmiles; // FIND MILES DRIVEN ON CHARGE

   if(charge<20)
   {
    electricMode = false;
   }
   else
   {
    electricMode = true;
   }

   chrg = currentTrip / electricEfficiency; // Charge used
   hmiles = getOdometer();
   if(electricMode == false)
   {
    autoType::drive(currentTrip);
    rchrg = getOdometer() - hmiles;
    charge = charge + (rchrg / 20);
   }
   else 
   {
    if((charge - chrg) >= 20)
    {
     cout<<"Electric being used"<<endl;
     charge = charge - chrg;
     setOdometer(getOdometer() + currentTrip);
    }
    else
    {
     setOdometer(currentTrip + (electricEfficiency * (charge - chrg) + getOdometer()));
     charge = 19;
     rchrg = getOdometer() - hmiles;
     cout<<"Gas being used"<<endl;
     autoType::drive(currentTrip - rchrg);
     charge = charge + (rchrg / 20);
     if(charge > 100)
     {
      charge = 100;
     }
    }
   }
  }

////////////////////////////////////////////////////////
  hybridType::hybridType(double mil, double gal, double efficiency, double max, double electricGas, double electricEff)
             :autoType(mil, gal, efficiency, max)
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
   charge = 10;
   electricEfficiency = 10;
   electricMode = 1;
  }

