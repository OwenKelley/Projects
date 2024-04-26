
/*
  Owen Kelley
  3 - 18 - 2022
  1720 - 01
  home/studets/okelley/cscs1720/programs/prog3/external.h

  Compiling instructions: g++ testProg.cpp
*/

#include <fstream>
#include <iostream>
#include <string>
#include "unorderedArrayListType.h"
#include "uniqueListType.h"

using namespace std;
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/*
  expenseCost - user can input the informatin used to calculate the profits
  precondition - takes in empty values of ticket cost, expenses, and people (in the raffle)
  postcondition - fills the variables with inputted data
*/
  void expenseCost(double &tickCost, double &expenses, int &people)
  {
   cout <<"Enter the cost per ticket: ";
   cin >> tickCost;
   cout << endl;
   cout <<"How many tickets were purchased: ";
   cin >> people;
   cout << endl;
   cout <<"Enter total expenses of fundraiser: ";
   cin >> expenses;
   cout << endl;
  }
///////////////////////////////////////////////////////////////////////////////////////////////
/*
  money - Calculates the profit of the raffle
  precondition - takes in the ticket price, the expenses, and the people in the raffle
  postcondition - returns the profit
*/
  double money(double ticket, double expenses, int people)
  {
   double profit;
   profit = ticket * people;
   profit = profit - expenses;
   return profit;
  }
///////////////////////////////////////////////////////////////////////////////////////////////
/*
  load - loads the file inputted
  precondition - opens the inputted filename 
  postcondition - loads the information into the lists and assigns a value to counter
*/
  template <class elemType>
  void load(elemType &lists, int &counter, string datafile)
  {
   ifstream inFile;
   string name;
   inFile.open(datafile);
   if(!inFile)
   {
    cout <<"Cannot open the input file. Program will terminate."<< endl;
   }

   while(!inFile.eof() && lists.isFull() == false)
   {
    getline(inFile, name);
    lists.insertAt(0, name);
    counter = counter + 1;
   }
   inFile.close();
  }
/////////////////////////////////////////////////////////////////////////////


// Going to be honest, I am not going to write a pre and post condition for this because at the end of the program I decided to not use it, but its functional if you ever want 4 different random numbers, so thats neat

 
  void randNum(int counter, /*int &grand, */int &p1, int &p2, int &p3, int &p4)
  {
//   grand = 0;
   p1 = 0;
   p2 = 0;
   p3 = 0;
   p4 = 0;
   int i = 0;
    for(int x = 1 ; x < 5 ; x++)
    {
/*
     if(x==0)
     {
      srand(time(0) + i);
      grand = rand() % (counter - 1);
     } 
     else*/ if(x == 1)
     {
      srand(time(0) + i);
      p1 = rand() % (counter - 1);
     }
     else if(x == 2)
     {
      srand(time(0) + i);
      p2 = rand() % (counter - 1);
     }
     else if(x == 3)
     {
      srand(time(0) + i);
      p3 = rand() % (counter - 1);
     }
     else if(x == 4)
     {
      srand(time(0) + i);
      p4 = rand() % (counter - 1);
     }
    }
 // Duplicate Fixer
   for(i=0 ; i < 50 ; i++)
   {
    if(p1 == p2 || p1 == p3 || p1 == p4 /*|| p1 == grand*/)
    {
     srand(time(0) + i);
     p1 = rand() % (counter - 1);  // 0 - 4
    }
    else if(p2 == p1 || p2 == p3 || p2 == p4/* || p2 == grand*/)
    {
     srand(time(0) + i);
     p2 = rand() % (counter - 1);  // 0 - 4
    }
    else if(p3 == p2 || p3 == p1 || p3 == p4 /*|| p3 == grand*/)
    {
     srand(time(0) + i);
     p3 = rand() % (counter - 1);  // 0 - 4
    }
    else if(p4 == p2 || p4 == p3 || p4 == p1 /*|| p4 == grand*/)
    {
     srand(time(0) + i);
     p4 = rand() % (counter - 1);  // 0 - 4
    }
/*
    else if(grand == p1 || grand == p2 || grand == p3 || grand == p4)
    {
     srand(time(0) + i);
     grand = rand() % (counter - 1);  // 0 - 4
    }
*/
   }
   p1 = p1 + 1;
   p2 = p2 + 1;
   p3 = p3 + 1;
   p4 = p4 + 1;
//   grand = grand + 1;
  }
////////////////////////////////////////////////////////////////////
/*
  grandNum = Picks a random number from witin the counter's range
  precondition = takes in the current counter value and the location you want to store the random number
  postcondition = stores the random number in the specified location
*/
  void grandNum(int counter, int &grand)
  {
   if(grand==0)
   {
    srand(time(0)/* + i*/);
    grand = rand() % (counter - 1); 
   }
   grand = grand + 1;
  }
///////////////////////////////////////////////////////////////////
/*
  someWinnersGetSprinkles - (unique list) makes sure that there is no winners still in the raffle, they already have their sprinkles, they dont need more
  precondition - takes in the current counter value of the unique list and the random number
  postcondition - removes the name from the list
*/
  template<class elemType>
  void someWinnersGetSprinkles(int uniqCounter, elemType &ListUniq, string &uniqueGet, int randnum)
  {
    ListUniq.retrieveAt(randnum, uniqueGet);
// REMOVING WINNER FROM OTHER RAFFLE PRIZES
    for(int u=0 ; u < uniqCounter ; u++)
    {
     if(ListUniq.seqSearch(uniqueGet) != -1)
     {
      ListUniq.removeAt(ListUniq.seqSearch(uniqueGet));
     }
    }  
  }
//////////////////////////////////////////////////////////////////
/*
  numWinnersGetSprinkles - (unordered list) makes sure that there is no winners still in the raffle, they already have their sprinkles, they dont need more
  precondition - takes in the current counter value of the unique list and the random number
  postcondition - removes the name from the list
*/
  template<class elemType>
  void numWinnersGetSprinkles(int counter, elemType &ListUnord, string &uniqueGet, int randnum)
  {
    for(int u=0 ; u < counter ; u++)
    {
     if(ListUnord.seqSearch(uniqueGet) != -1)
     {
      ListUnord.removeAt(ListUnord.seqSearch(uniqueGet));
     }
    }
  }



