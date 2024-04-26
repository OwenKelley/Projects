
/*
  Owen Kelley
  3 - 18 - 2022
  1720 - 01
  home/studets/okelley/cscs1720/labs/lab8/orderedArrayListType.h

  Compiling instructions: g++ testProg.cpp
*/

#ifndef H_orderedArrayListType
#define H_orderedArrayListType

#include <iostream>

using namespace std;
 
#include "arrayListType.h"
   
template <class elemType> 
class orderedArrayListType: public arrayListType<elemType>
{
public:
    void insertAt(int location, const elemType& insertItem);
    /*
      insertAt - inserts specified item into the order of the list regardless of location
      precondition - location and item to be inserted are input
      postcondition - adds the item into the order of the list regardless of location
    */
    void insertEnd(const elemType& insertItem);
    /*
      insertEnd - inserts specified item into the order of the list regardless of location
      precondition - item to be inserted is input
      postcondition - adds the item into the order of the list regardless of location
    */
    void replaceAt(int location, const elemType& repItem);
    /*
      replaceAt - replaces item with specified item into the order of the list regardless of location
      precondition - item to be inserted is input
      postcondition - adds the item into the order of the list regardless of location
    */
    int seqSearch(const elemType& searchItem) const;
    /* 
     Function to search the list for searchItem.
     Note that this is an abstract function.
     Postcondition: If the item is found, returns the location in the array where the item is found; otherwise, returns -1.
    */
    void remove(const elemType& removeItem);
    /*
      remove - removes item from list
      precondition - specified item to be removed input
      postcondition - removes specified item from list
    */
    void insert(const elemType& insertItem);
    /*
      insert - inserts specified item into the order of the list regardless of location
      precondition - item to be inserted is input
      postcondition - adds the item into the order of the list regardless of location
    */

    orderedArrayListType(int size = 100);
      //Constructor
}; 

template <class elemType>
void orderedArrayListType<elemType>::replaceAt(int location, const elemType& insertItem)
{
   insert(insertItem);
} //end insertAt

template <class elemType>
void orderedArrayListType<elemType>::insertEnd
                                 (const elemType& item)
{
  insert(item);
} 
////////////////////////////////////////////////////////////////////
template <class elemType>
int orderedArrayListType<elemType>::seqSearch
                            (const elemType& searchItem) const
{
    int loc;
    for (loc = 0; loc < this->length; loc++)
    {
        if (this->list[loc] == searchItem)
        {
            return loc;
        }
	else if(this->list[loc] > searchItem)
        {
           return -1;
        }
    }
        return -1;
} //end seqSearch

template <class elemType>
void orderedArrayListType<elemType>::remove
                               (const elemType& removeItem)
{
    int loc;

    if (this->length == 0)
        cout << "Cannot delete from an empty list." << endl;
    else
    {
        loc = seqSearch(removeItem);

        if (loc != -1)
            this->removeAt(loc);
        else
            cout << "The item to be deleted is not in the list."
                 << endl;
    }
} //end remove

template <class elemType>
void orderedArrayListType<elemType>::insertAt(int location, 
                                       const elemType& item)
{
  insert(item);
}  
////////////////////////////////////////////////////////////////////////
template <class elemType>
void orderedArrayListType<elemType>::insert(const elemType& insertItem)
{
 if (this->length == 0)
 {
  this->list[this->length++] = insertItem;
 }
 else if (this->length == this->maxSize)
 {
  cout << "Cannot insert in a full list." << endl;
 }
 else
 {
//Find the location in the list to insert item, keeping items in ascending order.
  int loc=0;
  bool found = false;
  while (!found && loc < this->length)
  {
   if (this->list[loc] >= insertItem)
   {
    found = true;
   }
   else
   {
    loc++;
   }
  }
//Now, move elements down to make space for insertItem
  for (int i = this->length; i > loc; i--)
  { 
   this->list[i] = this->list[i - 1];
 //loc is the location in the array for insertItem
  }
  this->list[loc] = insertItem;
  this->length++;
 }
} //end insert
/////////////////////////////////////////////////////////////////////////
template <class elemType>
orderedArrayListType<elemType>::orderedArrayListType(int size)
                               :arrayListType<elemType>(size)
{
}  //end constructor


#endif
