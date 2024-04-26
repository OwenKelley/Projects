/*
  Owen Kelley
  1 - 28 - 2022
  1720 - 01
  home/studets/okelley/cscs1720/labs/lab2.cpp

  About: This progam takes in a datafile consisting of first name, last name, ID numbers, and birthdays. It can find the age of the members of the data file and return the information of the users who have a certain age

  Compiling instructions: g++ lab2.cpp
*/
  #include <iostream>
  #include <fstream>
  #include <string>
  #include <iomanip>
  using namespace std;
////////////////////////////////////////////////////////////////
  struct dateType
  {
   int month;
   int day;
   int year;
  };

  struct personType
  {
   string firstName;
   string lastName;
   int IDnum;
   dateType birthday;
  };
////////////////////////////////////////////////////////////////////
//Prototypes
  void loadInfo(personType person[], int &counter);
  void readDate(dateType &mdy);
  void calcAge(dateType mdy, personType person[], int age[], int counter);
  void printInfo(dateType mdy, personType person[], int age[], int select);
  void searchAge(personType person[], int counter, int age[], dateType mdy);
////////////////////////////////////////////////////////////////////
  int main()
  {
   int MAX = 50;
   dateType mdy;
   mdy.month = 0;
   mdy.day = 0;
   mdy.year = 0;
   personType person[MAX];
   int counter = 0;
   int age[MAX];

   loadInfo(person, counter);

   readDate(mdy);
   calcAge(mdy, person, age, counter);
   searchAge(person, counter, age, mdy);

   return 0;
  }
////////////////////////////////////////////////////////////////////
/*
  loadInfo - Loads input data for further use

  Precondition: Takes in a specified datafile 
  Postcondition: Loads information into a struct and establishes number of members in the datafile
*/
  void loadInfo(personType person[], int &counter)
