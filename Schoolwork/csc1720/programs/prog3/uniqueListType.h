
/*
  Owen Kelley
  3 - 8 - 2022
  1720 - 01
  home/studets/okelley/cscs1720/labs/lab7/uniqueListType.h
*/

#ifndef H_uniqueListType
#define H_uniqueListType

#include<string>
#include"unorderedArrayListType.h"

using namespace std;

template <class elemType>
class uniqueListType: public unorderedArrayListType<elemType>
{
   public:
      /* insertAt Function - Inserts specified item at a specified location in the list
         Precondition: Takes in a location and an item to insert
         Postcondition: Inserts the item into the list based on the location given
      */
      void insertAt(int location, const elemType& insertItem);
      /* insertEnd Function - inserts specified item at the end of the list
         Precondition: Takes in specified item to insert
         Postcondition: Inserts the item at the end of the list
      */
      void insertEnd(int location, const elemType& insertItem);
      /* replaceAt Function - Replaces specified item at a specified location in the list
         Precondition: Takes in a location and an item to insert
         Postcondition: Replaces specified item at a specified location in the list
      */
      void replaceAt(int location, elemType& repItem);
      // constructor
      uniqueListType(int size);
};



/////////////////////////////////////////////////////////////////
  template <class elemType>
  void uniqueListType<elemType>::insertAt(int location, const elemType& insertItem)
  {
   if(unorderedArrayListType<elemType>::seqSearch(insertItem) == -1)
   {
    unorderedArrayListType<elemType>::insertAt(location, insertItem);
   }
  }
////////////////////////////////////////////////////////////////
  template <class elemType>
  void uniqueListType<elemType>::insertEnd(int location, const elemType& insertItem)
  {
   if(unorderedArrayListType<elemType>::seqSearch(insertItem) == -1)
   {
    unorderedArrayListType<elemType>::insertAt(location, insertItem);
   }
  }
////////////////////////////////////////////////////////////////
  template <class elemType>
  void uniqueListType<elemType>::replaceAt(int location, elemType& insertItem)
  {
   if(unorderedArrayListType<elemType>::seqSearch(insertItem) == -1)
   {
    unorderedArrayListType<elemType>::insertAt(location, insertItem);
   }
  }
///////////////////////////////////////////////////////////////
  template <class elemType>
uniqueListType<elemType>::uniqueListType(int size)
               :unorderedArrayListType<elemType>(size)
{
}  //end constructor

#endif 





