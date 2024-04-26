/*
  Owen Kelley
  2 - 23 - 2022
  1720 - 01
  home/studets/okelley/cscs1720/programs/prog2/program.cpp

  About: This progam simulates the dashboard of both a standard car and a hybrid type car. The cars both have an odometer, fuel level, mpg, and tank size. The hybrid cars have an additional charge and a charge efficiency. They both have drive functions and the drive function for the hybrid cars is specialized to them

  Compiling instructions: g++ program.cpp autoTypeImp.cpp hybridTypeImp.cpp
*/
  #include <iostream>
  #include <fstream>
  #include <string>
  #include <iomanip>
  #include "autoType.h"
  #include "hybridType.h"
  using namespace std;
///////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////
  int main()
  {
   autoType car;
//   autoType car1(400000000, -20, -20, 400);
//   autoType car2(999999, -5, -5);

//Constructor Test
   cout << car.createDash() << endl;
//   cout << car1.createDash() << endl;
//   cout << car2.createDash() << endl;

   cout<<"TEST 1, parameterized constructors all set to 0"<<endl;
   cout<<"Car 1 : Miles(0), Gallons(0), Efficiency(0)"<<endl;
   car.setValues(0, 0, 0);
   cout<< car.createDash() <<endl;
   cout<<"Drive 10 miles"<<endl; 
   car.drive(10);
   cout<< car.createDash() <<endl;
   cout<<"Drive 10 miles"<<endl;
   car.drive(10);
   cout<< car.createDash() <<endl;
   cout<<"Drive 10 miles"<<endl;
   car.drive(10);
   cout<< car.createDash() <<endl<<endl;
   cout<<"==============================================="<<endl;


   cout <<"TEST 2, common drive function and setvalues tested"<<endl;
   cout<<"Car 2: Miles (2240), Gallons(33), Efficiency(18), *maxfuel 40*"<<endl;
   autoType car4(0, 0, 0, 40);
   car4.setValues(2240, 33, 18);
   cout<< car4.createDash() <<endl;
   cout<<"Drive 10 miles"<<endl;
   car4.drive(10);
   cout<< car4.createDash() <<endl;
   cout<<"Drive 10 miles"<<endl;
   car4.drive(10);
   cout<< car4.createDash() <<endl;
   cout<<"Drive 10 miles"<<endl;
   car4.drive(10);
   cout<< car4.createDash() <<endl<<endl;
   cout<<"==============================================="<<endl;
    

   cout<<"TEST 3, INVALID VALUES"<<endl;
   cout<<"Car 3: Miles (-100), Gallons(-100), Efficiency(-100), MaxFuel(-100)"<<endl;
   autoType car3(-100, -100, -100, -100);
//   car3.setValues(-100, -100, -100);
   cout<< car3.createDash() <<endl;
   cout<<"Drive 10 miles"<<endl;
   car3.drive(10);
   cout<< car3.createDash() <<endl;
   cout<<"Drive 10 miles"<<endl;
   car3.drive(10);
   cout<< car3.createDash() <<endl;
   cout<<"Drive 10 miles"<<endl;
   car3.drive(10);
   cout<< car3.createDash() <<endl<<endl;
   cout<<"==============================================="<<endl;


   cout<<"TEST 4, adding fuel"<<endl;
   cout<<"Car 3: Miles (15), Gallons(15), Efficiency(15), MaxFuel(20)"<<endl;
   autoType car1(20, 20, 20, 20);
   car1.setValues(15, 15, 15);
   cout<< car1.createDash() <<endl;
   cout<<"Adding 15 gallons of fuel"<<endl;
   car1.addFuel(15);
   cout<< car1.createDash() <<endl;
   cout<<"Drive 10 miles"<<endl;
   car1.drive(10);
   cout<< car1.createDash() <<endl;
   cout<<"Drive 10 miles"<<endl;
   car1.drive(10);
   cout<< car1.createDash() <<endl;
   cout<<"Drive 10 miles"<<endl;
   car1.drive(10);
   cout<< car1.createDash() <<endl<<endl;
   cout<<"============================================================"<<endl;
/////////////////////////////////////////////////////////////////////////////////
/*
   HYBRID
*/   
////////////////////////////////////////////////////////////////////////////////
   cout<<endl<<endl<<endl<<endl;
   cout<<"                    HYBRID CARS"<<endl<<endl<<endl<<endl;
   cout<<"============================================================"<<endl;
   cout<<"============================================================"<<endl;
   cout<<"============================================================"<<endl;

   hybridType hcar(15, 15, 15, 20, 40, 10);

   cout<<"Hybrid Car 1 (battery does not fall below 20):"<<endl;
   cout<<"Car 3: Miles (15), Gallons(15), Efficiency(15), MaxFuel(20), Charge(40), Electic Efficiency(10)"<<endl;
   cout<<"Hybrid Car createDash:"<<endl;
   cout<< hcar.createDash() <<endl<<endl;

   cout<<"Drive 15 miles"<<endl;
   hcar.hdrive(15);
   cout<< hcar.createDash() <<endl<<endl;

//   hcar.setChargeLevel(98);
//   hcar.setChargeEfficiency(22);

//   cout <<"getChargeLevel and getChargeEfficiency after setChargeLevel and setChargeEfficiency:"<<endl;
//   cout <<"Charge Level: "<< hcar.getChargeLevel() << endl;
//   cout <<"Charge Efficiency: "<< hcar.getChargeEfficiency() << endl;
   cout<<"============================================================"<<endl;
   cout<<"============================================================"<<endl;
   cout<<"============================================================"<<endl;
   
   hybridType hcar2(15, 15, 15, 20, 15, 5);

   cout<<"Hybrid Car 3 (battery driven till below 20 and till gas depleated):"<<endl;
   cout<<"hCar 3: Miles (15), Gallons(15), Efficiency(15), MaxFuel(20), Charge(15), Electic Efficiency(5)"<<endl;
   cout<< hcar2.createDash() <<endl<<endl;

   cout<<"Drive 10 miles"<<endl;
   hcar2.hdrive(10);
   cout<< hcar2.createDash() <<endl<<endl;

   cout<<"============================================================"<<endl;
   cout<<"============================================================"<<endl;
   cout<<"============================================================"<<endl;

   hybridType hcar1(15, 15, 15, 20, 40, 5);

   cout<<"Hybrid Car 3 (battery driven till below 20 and till gas depleated):"<<endl;
   cout<<"hCar 3: Miles (15), Gallons(15), Efficiency(15), MaxFuel(20), Charge(40), Electic Efficiency(5)"<<endl;
   cout<< hcar1.createDash() <<endl<<endl;

   cout<<"Drive 10000000 miles"<<endl;
   hcar1.hdrive(10000000);
   cout<< hcar1.createDash() <<endl<<endl;


   return 0;
  }


