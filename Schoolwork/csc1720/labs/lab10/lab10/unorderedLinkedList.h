/*
   Owen Kelley
   csc1720
   4/4/2022
*/
#ifndef UNORDEREDLINKEDLIST
#define UNORDEREDLINKEDLIST

#include "linkedList.h"

using namespace std;


//***************** derived unordered linked list type definition **************************
template <class Type>
class unorderedLinkedList:public linkedListType<Type>
{
public:
      bool search(const Type& searchItem) const;
      //Function to determine whether searchItem is in the list.
      //Postcondition: Returns true if searchItem is in the 
      //               list, otherwise the value false is 
      //               returned.

      void insertFirst(const Type& newItem);
      //Function to insert newItem at the beginning of the list.
      //Postcondition: first points to the new list, newItem is
      //               inserted at the beginning of the list,
      //               last points to the last node in the  
      //               list, and count is incremented by 1.

      void insertLast(const Type& newItem);
      //Function to insert newItem at the end of the list.
      //Postcondition: first points to the new list, newItem 
      //               is inserted at the end of the list,
      //               last points to the last node in the 
      //               list, and count is incremented by 1.

      void deleteNode(const Type& deleteItem);
      //Function to delete deleteItem from the list.
      //Postcondition: If found, the node containing 
      //               deleteItem is deleted from the list.
      //               first points to the first node, last
      //               points to the last node of the updated 
      //               list, and count is decremented by 1.

      void deleteLargest();
    // deleteLargest - deletes the largest number in the linked list
    // precondition - takes in a list
    // postcondition - deletes the largest element of the list
};

//***************** unordered linked list type implementation **************************
template <class Type>
void unorderedLinkedList<Type>::deleteLargest()
{
   Type largest;
   nodeType<Type> *curPtr = this->first;
   largest = curPtr->info;
   while(curPtr->link != nullptr)
   {
    if(largest < curPtr->info)
    {
     largest = curPtr->info;
    }
    curPtr = curPtr->link;
   }

   if(largest < curPtr->info)
   {
    largest = curPtr->info;
   }

   deleteNode(largest);
}

template <class Type>
bool unorderedLinkedList<Type>::search(const Type& searchItem) const
{
   nodeType<Type> *curPtr = this->first;

   while(curPtr != nullptr) {
      if(curPtr->info == searchItem)
         return true;
      curPtr = curPtr->link;
   }

   return false;
}

template <class Type>
void unorderedLinkedList<Type>::insertFirst(const Type & newItem)
{
   nodeType<Type> *newNode;
   newNode = new nodeType<Type>;
   newNode->info = newItem;
   newNode->link = this->first;
   this->first = newNode;
   this->count++;

   if(this->last==nullptr)
      this->last = newNode;
}

template <class Type>
void unorderedLinkedList<Type>::insertLast(const Type & newItem)
{
   nodeType<Type> *newNode;
   newNode = new nodeType<Type>;
   newNode->info = newItem;
   newNode->link = nullptr;
   this->count++;

   if(this->last==nullptr)
      this->first = this->last = newNode;
   else {
      this->last->link = newNode;
      this->last = newNode; 
   }
}

template <class Type>
void unorderedLinkedList<Type>::deleteNode(const Type& deleteItem)
{
   nodeType<Type> *curPtr;
   nodeType<Type> *prevPtr;
   bool found = false;
  
   if(this->isEmpty())
      cerr << "List is empty, can't delete from empty list!" << endl;
   else {
      prevPtr = nullptr;
      curPtr = this->first;
      while(curPtr != nullptr && !found) {
         if(curPtr->info != deleteItem) {
            prevPtr = curPtr;
            curPtr = curPtr->link;
         } else {
            found = true;
         }
      }
      if(!found) {
         cerr << deleteItem << " is not in the list" << endl;
      } else {
         if(curPtr == this->first) {
            //found in the first node
            this->first = this->first->link;
         } else {
            //found after the first node 
            prevPtr->link = curPtr->link;
         }
         if(curPtr == this->last) {
            //if curPtr = last pointer then one of two items are true;
            //only one node in the list and deleteItem is in the first node
            //more than one node in the list and deleteItem is the last node
            this->last = prevPtr;
         }
         delete curPtr; 
         this->count--;
      }
   }

}
#endif
