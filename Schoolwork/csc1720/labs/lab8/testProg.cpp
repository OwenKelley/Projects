//Data: 2.85 6.74 28.93 61.22 10.00 45.34 61.78 5.75

/*
  Owen Kelley
  3 - 18 - 2022
  1720 - 01
  home/studets/okelley/cscs1720/labs/lab8/testProg.cpp

  About: This program tests the functionality of class arrayListType, unorderedArrayListType, and orderedArrayListType while using templates and operator overloading

  Compiling instructions: g++ testProg.cpp
*/

#include <iostream>
#include <string>
#include "unorderedArrayListType.h"
#include "orderedArrayListType.h"

using namespace std; 

int main() 
{
    cout << endl;
    unorderedArrayListType<double> numList(25);
// numlist is created
// after all that, then create second object in place of 25 pass in numlist
    cout<<"Create a list of doubles:"<<endl;
    numList.insertEnd(2.85);
    numList.insertEnd(6.74);
    numList.insertEnd(28.93);
    numList.insertEnd(61.22);
    numList.insertAt(0, 10.00);
    numList.insertAt(2,45.34);
    numList.insertEnd(61.78);
    numList.insertEnd(5.75);

//    numList.print();           
    cout << numList;
    cout << endl;              
    cout<<"Remove 6.74:"<<endl;
    numList.remove(6.74);
//    numList.print();
    cout << numList;
    cout<<endl;
    cout<<endl;

    cout<<"Remove 0.0:"<<endl;
    numList.remove(0.0);
//    numList.print();
    cout << numList;
    cout<<endl;

    cout<<endl << "Search for 61.78 in the list:"<<endl;
    if(numList.seqSearch(61.78) != -1)
        cout<<"Successfully found 61.78 in list"<<endl;
    else
        cout<<"61.78 not found"<<endl;
    cout<<endl;

    cout<< endl <<"Search for 255.34 in the list:"<<endl;
    if(numList.seqSearch(255.34) != -1)
        cout<<"Successfully found 255.34 in list"<<endl;
    else
        cout<<"255.34 not found"<<endl;

    cout<< endl << "List empty? " << numList.isEmpty()<< endl << "List full? " << numList.isFull()<< endl << "length: " <<numList.listSize()<<
        " maxsize: "<<numList.maxListSize()<<endl;
    cout<<endl;
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    cout<<"================================================="<<endl;
    cout<<"================================================="<<endl;

    cout<<"Overloaded assignment operator test:"<<endl;
    cout <<"Template List " << numList << endl;
    unorderedArrayListType<double> othrList = numList;
//    othrList.print();

    cout <<"Copied List: " << othrList << endl;

    cout<<"================================================="<<endl;
    cout<<"================================================="<<endl;
    cout<<endl;

    orderedArrayListType<double> someList(25);
    cout<<"Create a list of ordered doubles:"<<endl;
    someList.insertEnd(2.85);
    someList.insertEnd(6.74);
    someList.insertEnd(28.93);
    someList.insertEnd(61.22);
    someList.insertAt(0, 10.00);
    someList.insertAt(2,45.34);
    someList.insertEnd(61.78);
    someList.insertEnd(5.75);

//    someList.print();
    cout << someList;
    cout<<endl;

    cout<<"================================================="<<endl;
    cout<<"================================================="<<endl;
    cout<<endl;

    orderedArrayListType<string> anotherList(25);
    cout<<"Create an ordered list of strings:"<<endl;

    anotherList.insertEnd("Owen");
    anotherList.insertEnd("Ash");
    anotherList.insertEnd("Kelley");
    anotherList.insertEnd("Corcoran");
    anotherList.insertEnd("Cole");

//    anotherList.print();
    cout << anotherList;

    cout<<endl << "Search for Owen in the list:"<<endl;
    if(anotherList.seqSearch("Owen") != -1)
    {
       cout<<"Successfully found Owen in list"<<endl;
    }
    else
    {
        cout<<"Owen not found"<<endl;
    }
    cout<<endl;

    return 0;                                   
}



