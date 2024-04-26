#include <string>

#ifndef UnorderedArrayList_TYPE
#define UnorderedArrayList_TYPE
   
#include "arrayListType.h" 

class unorderedArrayListType: public arrayListType
{
   public:
      //Constructor
      unorderedArrayListType(int size = 100);

      /*
         insertAt:  Takes in a specified item and location and adds the item to that location of the list, the rest of the items have been shifted

         Precondition: Takes in specified location and an item to insert
         Postcondition: adds item to the location of the list, the rest of the items have been shifted
      */
      void insertAt(int location, int insertItem);
  
      /* 
         insertEnd: Takes in specified item and places at the end of the list

         Precondition: Takes in a specified item
         Postcondition: Replaces the last item in the list with the specified item
      */
      void insertEnd(int insertItem);

      /* 
         replaceAt: Takes in a location and a specified item that replaces the item in the specified location, shifts all items down one
 
         Precondition: Takes in a specified location and item and uses the list
         Postcondition: replaces the item in the specified location, shifts all items down one
      */
      void replaceAt(int location, int repItem);
  
      /* 
         seqSearh: Takes in a specified item the finds the item in the list and finds the location of that item in the list
         Precondition: Takes in specified item to search for
         Postcondition: Returns the location of the found item
      */
      int seqSearch(int searchItem) const;

      /* 
        removeAt: Takes selected item and replaces the selected item with the last item of the list replacing the item. The list's length has been reduced by one

        Precondition: takes in selected item
        Postcondition: swaps around last item in the list with the selected item and reduces the list length
      */
      void removeAt(int location);

      /*
        insertFirst: A specified item has been added to the start of the list
  
        Precondition: Takes in location but it is unnecessary, also takes in the specified item to be added
        Postcondition: Adds specified item to the start of the list
      */
      void insertFirst(int location, int insertItem);
 
      /*
        findMax: sorts through the entire array and finds the highest value 

        Precondition: Needs a list to operate on 
        Postcondition: Sorts through the entire list, finds the highest value, then returns highest value
      */
      double findMax();
}; 

#endif
