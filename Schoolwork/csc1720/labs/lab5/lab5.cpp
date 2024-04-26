/*
  Owen Kelley
  2 - 2 - 2022
  1720 - 01
  home/studets/okelley/cscs1720/labs/lab4/lab4.cpp

  About: This progam takes in a datafile consisting of first name, last name, ID numbers, and birthdays. It can find the age of the members of the data file and return the information of the users who have a certain age

  Compiling instructions: g++ lab4.cpp autoTypeImp.cpp
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
/*1
   autoType car;
   autoType car1(57, 20, 20);
   autoType car2(999999, -5, -5);

//Constructor Test
   cout << car.createDash() << endl;
   cout << car1.createDash() << endl;
   cout << car2.createDash() << endl;

//TEST 1
   cout<<"Car 1:"<<endl;
   car.setValues(60, 5, 40);
   cout<< car.createDash() <<endl; 
   car.drive(10);
   cout<< car.createDash() <<endl;
   car.drive(10);
   cout<< car.createDash() <<endl;
   car.drive(1000);
   cout<< car.createDash() <<endl<<endl;

//TEST 2
   cout<<"Car 2:"<<endl;
   car.setValues(1023, 21, 13);
   cout<< car.createDash() <<endl;
   car.drive(11);
   cout<< car.createDash() <<endl;
   car.drive(33);
   cout<< car.createDash() <<endl;
   car.drive(100);
   cout<< car.createDash() <<endl<<endl;
  
//TEST 3 (ALL INVALID VALUES)
   cout<<"Car 3:"<<endl;
   car1.setValues(999999, -5, 2);
   cout<< car1.createDash() <<endl;
   car1.drive(10);
   cout<< car1.createDash() <<endl;
   car1.drive(10);
   cout<< car1.createDash() <<endl;
   car1.drive(1000);
   cout<< car1.createDash() <<endl<<endl;
*/
///
   cout<<"====================== HYBRID CAR =========================="<<endl;

   hybridType hcar;

   cout<<"Hybrid Car createDash:"<<endl;
   cout<< hcar.createDash() <<endl<<endl;

   cout <<"getChargeLevel and getChargeEfficiency before setChargeLevel and setChargeEfficiency:"<<endl;
   cout <<"Charge Level: "<< hcar.getChargeLevel() << endl;
   cout <<"Charge Efficiency: "<< hcar.getChargeEfficiency() << endl;

   hcar.setChargeLevel(98);
   hcar.setChargeEfficiency(22);

   cout <<"getChargeLevel and getChargeEfficiency after setChargeLevel and setChargeEfficiency:"<<endl;
   cout <<"Charge Level: "<< hcar.getChargeLevel() << endl;
   cout <<"Charge Efficiency: "<< hcar.getChargeEfficiency() << endl;

   cout<<"====================== HYBRID CAR INVALID VALUES =========================="<<endl;

   hybridType hcar1;

   cout<<"Hybrid Car createDash:"<<endl;
   cout<< hcar1.createDash() <<endl<<endl;

   cout <<"getChargeLevel and getChargeEfficiency before setChargeLevel and setChargeEfficiency:"<<endl;
   cout <<"Charge Level: "<< hcar1.getChargeLevel() << endl;
   cout <<"Charge Efficiency: "<< hcar1.getChargeEfficiency() << endl;

   hcar1.setChargeLevel(999);
   hcar1.setChargeEfficiency(-22);

   cout <<"getChargeLevel and getChargeEfficiency after setChargeLevel and setChargeEfficiency:"<<endl;
   cout <<"Charge Level: "<< hcar1.getChargeLevel() << endl;
   cout <<"Charge Efficiency: "<< hcar1.getChargeEfficiency() << endl;
   
   return 0;
  }
