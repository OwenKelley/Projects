/*
   Owen Kelley
   csc1720
   4/20/2022

   This program takes in a binary number and translates it to an equivalent decimal number using an array based stack

   g++ arrayBasedStack.cpp
*/

 #include <iostream>
 #include <cmath>
 #include "arrayStack.h"

 using namespace std;

 int main()
 {
    stackType<int> stack1(50);
    stackType<int> rstack1(50);
    int count;
    double total = 0;
    stack1.initializeStack();
    rstack1.initializeStack();
/////////////////////////////////////////////////
// INPUT
    int binaryNum = 0;
    double input = 0;

    cout<<"Enter your binary number (10 digits)"<<endl;
    cin >> input;

    while(input > 1111111111)
    {
     cout<<"Number to big, max of 10 digits"<<endl;
     cout<<"Enter your binary number (10 digits)"<<endl;
     cin >> input;
    }
    binaryNum = input;

    while(binaryNum != 0 || stack1.isFullStack())
    {
     stack1.push(binaryNum % 10);
     binaryNum = binaryNum / 10;
    }

    stack1.reverseStack(rstack1);

/////////////////////////////////////////////////
/*
    cout << "stack1: ";
    while (!stack1.isEmptyStack())
    {
     cout << stack1.top() << " ";
     stack1.pop();
    }
    cout<<endl;
*/
/////////////////////////////////////////////////
    count = 0;
    while(!rstack1.isEmptyStack())
    {
     if(rstack1.top() == 1)
     {
      total = total + pow(2, count);
     }
     else if(rstack1.top() != 0)
     {
      cout<<"Invalid Number Input"<<endl;
      return 1;
     }
     rstack1.pop();
     count = count + 1;
    }

    cout<<"Number: "<<total<<endl;

   return 0;
 }



