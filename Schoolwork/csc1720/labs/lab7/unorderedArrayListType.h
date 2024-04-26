/*
  Owen Kelley
  3 - 8 - 2022
  1720 - 01
  home/studets/okelley/cscs1720/labs/lab7/unorderedArrayListType.h
*/
#include <string>

#ifndef UnorderedArrayList_TYPE
#define UnorderedArrayList_TYPE
   
#include "arrayListType.h" 
using namespace std;

class unorderedArrayListType: public arrayListType
{
   public:
      //Constructor
      unorderedArrayListType(int size = 100);

      /* insertAt Function - Inserts specified item at a specified location in the list
         Precondition: Takes in a location and an item to insert
         Postcondition: Inserts the item into the list based on the location given
      */
      void insertAt(int location, string insertItem);
  
      /* insertEnd Function - inserts specified item at the end of the list
         Precondition: Takes in specified item to insert
         Postcondition: Inserts the item at the end of the list
      */
      void insertEnd(string insertItem);

      /* replaceAt Function - Replaces specified item at a specified location in the list
         Precondition: Takes in a location and an item to insert
         Postcondition: Replaces specified item at a specified location in the list
      */
      void replaceAt(int location, string repItem);
  
      /* seqSearh Function - searches through the list for the specified item and either returns the location of the item, or a -1
         Precondition: Takes in specified item to search for
         Postcondition: returns the location of the item or a -1
      */
      int seqSearch(string searchItem) const;

}; 

#endif
