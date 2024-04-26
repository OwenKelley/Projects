/*
  Owen Kelley
  2 - 2 - 2022
  1720 - 01
  home/studets/okelley/cscs1720/labs/lab4/autoTypeImp.cpp
*/
  #include<iostream>
  #include<string>
  #include<cmath>
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
/*
   setFuelEfficiency(efficiency);
   setFuelLevel(gal);
   setOdometer(mil);
*/
   if(mil<=600000 && mil > 0 && gal >= 0 && gal <= 50 && efficiency >= 5 && efficiency <= 95)
   {
    if(mil <= 600000 && mil > 0)
    {
     miles = mil;
    }
    else
    {
     miles = 10;
     cerr <<"Invalid Miles value, input value *between* (0 - 600,000)"<< endl;
    }
    if(gal >= 0 && gal <= 50)
    {
     gallons = gal;
    }   
    else 
    {
     gallons = 10;
     cerr <<"Invalid Gallons value, input value *between* (0 - 50)"<< endl;
    }
    if(efficiency >= 5 && efficiency <= 95)
    {
     mpg = efficiency;
    }
    else
    {
     mpg = 10; 
     cerr <<"Invalid mpg value, input value *between* (5 - 95)"<< endl;
    }
   }

   else
   {
    if(mil > 600000 || mil < 0)
    {
     cerr <<"Invalid Miles value, input value between (1 - 600,000)"<< endl;
    }
    if(gal < 0 || gal > 50)
    {
     cerr <<"Invalid Gallons value, input value between (0 - 50)"<< endl;
    }
    if(efficiency < 5 || efficiency > 95)
    {
     cerr <<"Invalid mpg value, input value between (5 - 95)"<< endl;
    }
   }
  }
////////////////////////////////////////////////////////
  double autoType::getOdometer() const
  {
   return miles;
  }
////////////////////////////////////////////////////////
  double autoType::getFuelEfficiency() const
  {
   return mpg;
  }
////////////////////////////////////////////////////////
  double autoType::getFuelLevel() const
  {
   return gallons;
  }
////////////////////////////////////////////////////////
  void autoType::setOdometer(double mil)
  { 
   if(mil <= 600000 && mil > 0)
   {
    miles = mil;
   }
   else
   {
    miles = 0;
    cerr <<"Invalid Miles value, input value between (1 - 600,000)"<< endl;
   }
  }
////////////////////////////////////////////////////////
  void autoType::setFuelLevel(double gal)
  {
   if(gal >= 0 && gal <= 50)
   {
    gallons = gal;
   }
   else
   {
    gallons = 0;
    cerr <<"Invalid Gallons value, input value between (0 - 50)"<< endl;
   }
  }
////////////////////////////////////////////////////////
  void autoType::setFuelEfficiency(double efficiency)
  {
   if(efficiency >= 5 && efficiency <= 95)
   {
    mpg = efficiency;
   }
   else
   {
    mpg = 0; 
    cerr <<"Invalid mpg value, input value betwee (5 - 95)"<< endl;
   }
  }
////////////////////////////////////////////////////////
  double autoType::addFuel(double fuel)
  {
   gallons = gallons + fuel;
   if(gallons >= MAXFUEL)
   {
    gallons = MAXFUEL;
   }
   return gallons;
  }
////////////////////////////////////////////////////////
  double autoType::DEFAULT_ODOM()
  {
   double DEFAULTODOM;
   DEFAULTODOM = 10;
   return DEFAULTODOM;
  }

  double autoType::DEFAULT_EFFICIENCY()
  {
   double DEFAULTEFFICIENCY;
   DEFAULTEFFICIENCY = 10;
   return DEFAULTEFFICIENCY;
  }

  double autoType::DEFAULT_FUEL()
  {
   double DEFAULTFUEL;
   DEFAULTFUEL = 10;
   return DEFAULTFUEL;
  }

  double autoType::DEFAULT_MAXFUEL()
  {
   double DEFAULTMAXFUEL;
   DEFAULTMAXFUEL = 10;
   return DEFAULTMAXFUEL;
  }

////////////////////////////////////////////////////////
/*
  createDash - outputs the odometer, fuel level, and the efficiency

  precondition - takes in miles, gallons, and mpg to convert them to strings
  postcondition - returns a string to output in main
*/  
  string autoType::createDash() const
  {
   string Dash;
   Dash = "Odometer = " + to_string(miles) + ", Fuel Level = " + to_string(gallons) + ", Efficiency = " + to_string(mpg) + ", Tank Size = " + to_string(MAXFUEL);
   
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
   if(currentTrip > 0 && mpg != 0)
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
   else
   {
    miles = 0;
    gallons = 0;
   }
  }
//////////////////////////////////////////////////////// 
  autoType::autoType(double mil, double gal, double efficiency, double max)
  {
   if(mil <= 600000 && mil >= 0)
   {
    miles = mil;
   }
   else
   {
    cerr<<"Invalid miles value, default value of 10 set"<<endl;
    miles = DEFAULT_ODOM();
   }
   if(gal >= 0 && gal <= max)
   {
    gallons = gal;
   }
   else
   {
    cerr<<"Invalid gallons value, default value of 10 set"<<endl;
    gallons = DEFAULT_FUEL();
   }
   if(efficiency > 1 && efficiency < 95)
   {
    mpg = efficiency;
   }
   else
   {
    cerr<<"Invalid mpg value, default value of 10 set"<<endl;
    mpg = DEFAULT_EFFICIENCY();
   }
   if(max > 5 && max < 50)
   {
    MAXFUEL = max;
   }
   else
   {
    cerr<<"Invalid max fuel value, default value of 10 set"<<endl;
    MAXFUEL = DEFAULT_MAXFUEL();
   }
  }
///////////////////////////////////////////////////////
  autoType::autoType()
  {
   miles = 0;
   gallons = 0;
   mpg = 0;
   MAXFUEL = 0;
  }
