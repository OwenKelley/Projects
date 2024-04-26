
/*
  Owen Kelley
  3 - 18 - 2022
  1720 - 01
  home/studets/okelley/cscs1720/labs/lab8/unorderedArrayListType.h

  Compiling instructions: g++ testProg.cpp
*/

#ifndef H_unorderedArrayListType
#define H_unorderedArrayListType

#include <iostream>

using namespace std;
 
#include "arrayListType.h"
   
template <class elemType> 
class unorderedArrayListType: public arrayListType<elemType>
{
public:
    void insertAt(int location, const elemType& insertItem);
    /*
      insertAt - inserts specified item at specified location
      precondition - location and item to be inserted are input
      postcondition - adds the item to specified location
    */
    void insertEnd(const elemType& insertItem);
    /*
      insertEnd - inserts specified item at end of the list
      precondition - takes in the specified item
      postcondition - adds the item to end of list
    */
    void replaceAt(int location, const elemType& repItem);
    /*
      replaceAt - replaces item with specified item at specified location
      precondition - location and item to be inserted are input
      postcondition -  replaces item with specified item at specified location
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

    unorderedArrayListType(int size = 100);
      //Constructor
}; 

template <class elemType>
void unorderedArrayListType<elemType>::insertAt(int location, const elemType& insertItem)
{
   if (location < 0 || location >= this->maxSize || location > this->length)
      cout << "The position of the item to be inserted "
           << "is out of range." << endl;
   else if (this->length >= this->maxSize)  //list is full
      cout << "Cannot insert in a full list" << endl;
   else
   {
      for (int i = this->length; i > location; i--)
         this->list[i] = this->list[i - 1]; //move the elements down

      this->list[location] = insertItem; //insert the item at
                                   //the specified position

      this->length++; //increment the length
   }
} //end insertAt

template <class elemType>
void unorderedArrayListType<elemType>::insertEnd
                                 (const elemType& insertItem)
{
    if (this->length >= this->maxSize)  //the list is full
        cout << "Cannot insert in a full list." << endl;
    else
    {
       this-> list[this->length] = insertItem; //insert the item at the end
        this->length++; //increment the length
    }
} //end insertEnd

template <class elemType>
int unorderedArrayListType<elemType>::seqSearch
                            (const elemType& searchItem) const
{
    int loc;
    bool found = false;

    for (loc = 0; loc < this->length; loc++)
        if (this->list[loc] == searchItem)
        {
            found = true;
            break;
        }

    if (found)
        return loc;
    else
        return -1;
} //end seqSearch

template <class elemType>
void unorderedArrayListType<elemType>::remove
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
void unorderedArrayListType<elemType>::replaceAt(int location, 
                                       const elemType& repItem)
{
    if (location < 0 || location >= this->length)
        cout << "The location of the item to be "
             << "replaced is out of range." << endl;
    else
        this->list[location] = repItem;
} //end replaceAt 

template <class elemType>
unorderedArrayListType<elemType>::
                       unorderedArrayListType(int size)
                       : arrayListType<elemType>(size)
{
}  //end constructor


#endif
