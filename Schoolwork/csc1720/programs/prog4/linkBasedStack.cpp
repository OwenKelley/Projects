////////////////////////////////////////////////////////////////////////////////////////////
/*
   Owen Kelley
   csc1720
   4/20/2022

   This program takes in a number and translates it to an equivalent binary number using a link based stack

   g++ linkBasedStack.cpp
*/

 #include <iostream>
 #include <cmath>
 #include "linkedStack.h"

 using namespace std;

 int main()
 {
    linkedStackType<int> stack1;
    linkedStackType<int> rstack1;
    stack1.initializeStack();
    rstack1.initializeStack();
/////////////////////////////////////////////////
// INPUT
    int Num = 0;
    double input = 0;

    cout<<"Enter your number (1023 - 0)"<<endl;
    cin >> input;

    while(input > 1023 || input < 0)
    {
     cout<<"Number out of range (1023 - 0)"<<endl;
     cout<<"Enter your number"<<endl;
     cin >> input;
    }
    Num = input;

// EXAMPLE:
// INPUT            - 23
// EXPECTED OUTPUT  - 10111

// BINARY CONVERSION:
// 256, 128, 64, 32, 16, 8, 4, 2, 1


//If number is above or equal to 256 then subtract 256 and add a 1 into the linked list
    if(Num >= 256)
    {
     Num = Num - 256;
     stack1.push(1);
    }
    else
    {
     stack1.push(0);
    }    
//If number is above or equal to 128 then subtract 128 and add a 1 into the linked list
    if(Num >= 128)
    {
     Num = Num - 128;
     stack1.push(1);
    }
    else
    {
     stack1.push(0);
    }
//If number is above or equal to 64 then subtract 64 and add a 1 into the linked list
    if(Num >= 64)
    {
     Num = Num - 64;
     stack1.push(1);
    }
    else
    {
     stack1.push(0);
    }
//If number is above or equal to 32 then subtract 32 and add a 1 into the linked list
    if(Num >= 32)
    {
     Num = Num - 32;
     stack1.push(1);
    }
    else
    {
     stack1.push(0);
    }
//If number is above or equal to 16 then subtract 16 and add a 1 into the linked list
    if(Num >= 16)
    {
     Num = Num - 16;
     stack1.push(1);
    }
    else
    {
     stack1.push(0);
    }
//If number is above or equal to 8 then subtract 8 and add a 1 into the linked list
    if(Num >= 8)
    {
     Num = Num - 8;
     stack1.push(1);
    }
    else
    {
     stack1.push(0);
    }
//If number is above or equal to 4 then subtract 4 and add a 1 into the linked list
    if(Num >= 4)
    {
     Num = Num - 4;
     stack1.push(1);
    }
    else
    {
     stack1.push(0);
    }
//If number is above or equal to 2 then subtract 2 and add a 1 into the linked list
    if(Num >= 2)
    {
     Num = Num - 2;
     stack1.push(1);
    }
    else
    {
     stack1.push(0);
    }
//If number is above or equal to 1 then subtract 1 and add a 1 into the linked list
    if(Num >= 1)
    {
     Num = Num - 1;
     stack1.push(1);
    }
    else
    {
     stack1.push(0);
    }
//DIGIT FLIP
    stack1.reverseStack(rstack1);
//PRINT STATEMENT 
    cout << "Binary Conversion: ";
    while (!rstack1.isEmptyStack())
    {
     cout << rstack1.top() << " ";
     rstack1.pop();
    }
    cout<<endl;

   return 0;
 }

