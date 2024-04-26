/*
  Owen Kelley
  1 - 18 - 2022
  1720 - 01
  home/studets/okelley/cscs1720/labs/lab6/lab6.cpp

  About:

  Compiling instructions: g++ lab2.cpp
*/
  #include <iostream>
  #include <fstream>
  #include <string>
  #include <iomanip>
  #include "unorderedArrayListType.h"
  #include "arrayListType.h"
  using namespace std;
////////////////////////////////////////////////////  
  int main()
  {
   cout<<"List Size (10)"<<endl;   
   unorderedArrayListType lists(10);

   lists.insertAt(0,1);
   lists.insertAt(1,2);
   lists.insertAt(2,3);
   lists.insertAt(3,4);
   lists.insertAt(4,5);
   lists.insertAt(5,6);
   lists.insertAt(6,7);
   lists.insertAt(7,8);
   lists.insertAt(8,9);
   lists.insertAt(9,10);   
   cout<<"Print original list:"<<endl;
   lists.print();

   lists.removeAt(7);

   cout<<"Print list 8 removed:"<<endl;
   lists.print();

   lists.insertFirst(0, 8);

   cout<<"Print list 8 added to front:"<<endl;
   lists.print();

   cout<<"Max = "<<lists.findMax()<<endl;


   return 0;
  }
