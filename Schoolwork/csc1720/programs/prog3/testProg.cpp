/*
  Owen Kelley
  3 - 18 - 2022
  1720 - 01
  home/studets/okelley/cscs1720/programs/prog3/testProg.cpp

  About:
 This program is a raffle. A certain amount of names are entered into the program and of the names, 4 gifts are given out to random individuals and 1 grand prize. You can only be in the grand prize raffle once, and you can only win one of the raffles, no double dipping...

  - Playstation 5 
  - Dinner for Two at Blue Water Grille
  - Set of 4 passes to Wet N Wild
  - $100 Amazon Gift Card
  - Set of 4 movie passes at the Palladium Regal Theater

  Compiling instructions: g++ testProg.cpp
*/

#include <iostream>
#include <ctime>
#include <string>
#include "unorderedArrayListType.h"
#include "uniqueListType.h"
#include "external.h"

using namespace std; 

int main() 
{
    int counter = 0;
    int uniqCounter = 0;
    int grandPrize = 0;
    int prize1 = 0;
    int prize2 = 0;
    int prize3 = 0;
    int prize4 = 0;
    int people;
    double tickCost;
    double expenses; 
    string unorderedGet;
    string uniqueGet;
    cout << endl;
    unorderedArrayListType<string> numList(100);
    uniqueListType<string> someList(100);

    cout<<"=============== Raffle ==============="<<endl;
     cout <<"Enter name of datafile: "<< endl;
     string datafile;
     cin >> datafile;

    load(numList, counter, datafile);
    load(someList, uniqCounter, datafile);        
    uniqCounter = someList.listSize();

    expenseCost(tickCost, expenses, people);
    cout<<"Profit = "<<money(tickCost, expenses, people)<<endl;



    cout << endl;              
    cout<<endl;
    cout<<endl;

    cout<<" * * * WINNERS * * * "<<endl;
    grandNum(uniqCounter, grandPrize);
    someList.retrieveAt(grandPrize, uniqueGet);
    cout<<"GRANDPRIZE: PlayStation 5 gaming system"<<endl
        <<"WINNER: "<<uniqueGet<<endl<<endl;

    someWinnersGetSprinkles(uniqCounter, someList, uniqueGet, grandPrize); // UNIQUE
    numWinnersGetSprinkles(counter, numList, uniqueGet, grandPrize);      // UNORDERED

    counter = numList.listSize();
    grandNum(counter, prize1);
    numList.retrieveAt(prize1, unorderedGet);
    cout<<"Prize 1 - Dinner for Two at Blue Water Grille: "<<endl
        <<"WINNER: "<<unorderedGet<<endl<<endl;
    numWinnersGetSprinkles(counter, numList, unorderedGet, prize1);      // UNORDERED


    counter = numList.listSize();
    grandNum(counter, prize2);
    numList.retrieveAt(prize2, unorderedGet);
    cout<<"Prize 2 - Set of 4 passes to Wet N Wild: "<<endl
        <<"WINNER: "<<unorderedGet<<endl<<endl;
    numWinnersGetSprinkles(counter, numList, unorderedGet, prize2);      // UNORDERED


    counter = numList.listSize();
    grandNum(counter, prize3);
    numList.retrieveAt(prize3, unorderedGet);
    cout<<"Prize 3 - $100 Amazon Gift Card: "<<endl
        <<"WINNER: "<<unorderedGet<<endl<<endl;
    numWinnersGetSprinkles(counter, numList, unorderedGet, prize3);      // UNORDERED


    counter = numList.listSize();
    grandNum(counter, prize4);
    numList.retrieveAt(prize4, unorderedGet);
    cout<<"Prize 4 - Set of 4 movie passes at the Palladium Regal Theater: "<<endl
        <<"WINNER: "<<unorderedGet<<endl<<endl;
    numWinnersGetSprinkles(counter, numList, unorderedGet, prize4);      // UNORDERED


    cout<<endl;
    cout<<endl;
    cout << endl;

    return 0;                                   
}



