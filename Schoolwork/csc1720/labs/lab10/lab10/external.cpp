/*
   Owen Kelley
   csc1720
   4/4/2022
*/
#include<iostream>
#include"unorderedLinkedList.h"

using namespace std;

/*
  findAvg - find the average of the list
  precondition - takes in an unordered list type list
  postcondition - returns the average of that list
*/
template <class type>
double findAvg(unorderedLinkedList<type>& list)
{
  double avg = 0;
  int count = 0; 

   linkedListIterator<type> it;

   for (it = list.begin(); it != list.end(); ++it)
   { 
    avg = avg + *it;
    count = count + 1;
   }

  avg = avg / count;
  return avg;
}
