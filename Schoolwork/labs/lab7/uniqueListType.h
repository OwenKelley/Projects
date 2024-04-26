
/*
  Owen Kelley
  3 - 8 - 2022
  1720 - 01
  home/studets/okelley/cscs1720/labs/lab7/uniqueListType.h
*/

#ifndef UniqueArrayList_TYPE
#define UniqueArrayList_TYPE 

#include<string>
#include"unorderedArrayListType.h"

using namespace std;

class uniqueListType: public unorderedArrayListType
{
   public:
      /* insertAt Function - Inserts specified item at a specified location in the list
         Precondition: Takes in a location and an item to insert
         Postcondition: Inserts the item into the list based on the location given
      */
      void insertAt(int location, string insertItem);
      /* insertEnd Function - inserts specified item at the end of the list
         Precondition: Takes in specified item to insert
         Postcondition: Inserts the item at the end of the list
      */
      void insertEnd(int location, string insertItem);
      /* replaceAt Function - Replaces specified item at a specified location in the list
         Precondition: Takes in a location and an item to insert
         Postcondition: Replaces specified item at a specified location in the list
      */
      void replaceAt(int location, string repItem);
      // constructor
      uniqueListType(int size);
};
#endif 
