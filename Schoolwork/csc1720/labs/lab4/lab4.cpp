
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
  using namespace std;
///////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////

  int main()
  {
   autoType car;

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

//TEST 3
   cout<<"Car 3:"<<endl;
   car.setValues(0, 20, 24);
   cout<< car.createDash() <<endl;
   car.drive(10);
   cout<< car.createDash() <<endl;
   car.drive(10);
   cout<< car.createDash() <<endl;
   car.drive(1000);
   cout<< car.createDash() <<endl<<endl;
  
   return 0;
  }


