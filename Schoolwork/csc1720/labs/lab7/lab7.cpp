
/*
  Owen Kelley
  1 - 18 - 2022
  1720 - 01
  home/studets/okelley/cscs1720/labs/lab7/lab7.cpp

  About: This program takes in a list of names, skips the duplicate names and prints up to 16 names

  Compiling instructions: g++ lab7.cpp arrayListType.cpp unorderedArrayListType.cpp uniqueListType.cpp
*/
  #include <iostream>
  #include <fstream>
  #include <string>
  #include <iomanip>
  #include "uniqueListType.h"
  #include "unorderedArrayListType.h"
  #include "arrayListType.h"
  using namespace std;
////////////////////////////////////////////////////
  void load(uniqueListType &lists) //previously unordered
  {
//Load data into array until EOF
   string name;
   cin >> name;

   while(!cin.eof() && lists.isFull() == false)
   {
    lists.insertAt(0, name);
    cin >> name;
   }
  }

//./a.out < names.txt

////////////////////////////////////////////////////  
  int main()
  {
   cout<<"List Size (3)"<<endl; //16
   uniqueListType lists(3); //16

   load(lists);
   cout<<"Print list:"<<endl;
   lists.print();

   return 0;
  }
