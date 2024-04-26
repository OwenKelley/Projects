/*
  Owen Kelley
  3 - 8 - 2022
  1720 - 01
  home/studets/okelley/cscs1720/labs/lab7/arrayListType.cpp
*/
#include <string>
#include <iostream>
//#include "unorderedArrayListType.h"
//#include "arrayListType.h"
#include "uniqueListType.h"

using namespace std;
/////////////////////////////////////////////////////////////////
  void uniqueListType::insertAt(int location, string insertItem)
  {
   if(unorderedArrayListType::seqSearch(insertItem) == -1)
   {
    unorderedArrayListType::insertAt(location, insertItem);
   }
  }
////////////////////////////////////////////////////////////////
  void uniqueListType::insertEnd(int location, string insertItem)
  {
   if(unorderedArrayListType::seqSearch(insertItem) == -1)
   { 
    unorderedArrayListType::insertAt(location, insertItem);
   }
  }
////////////////////////////////////////////////////////////////
  void uniqueListType::replaceAt(int location, string insertItem)
  {
   if(unorderedArrayListType::seqSearch(insertItem) == -1)
   {
    unorderedArrayListType::insertAt(location, insertItem);
   }
  }
///////////////////////////////////////////////////////////////
uniqueListType::uniqueListType(int size) 
               :unorderedArrayListType(size)
{
}  //end constructor

