// Owen SI Pointer Test For Reference

#include<iostream>
#include"unorderedLinkedList.h"

using namespace std;

int main()
{
 int *pointer;
 int testNum;

 testNum = 12;
 pointer = &testNum;
 cout<<"testNum              "<< testNum << endl;
 cout<<"*pointer             "<< *pointer << endl;
 cout<<"pointer              "<< pointer << endl; 
// cout<<"pointer -> testNum   "<< pointer->testNum<<endl;
 cout<<"&testNum             "<<&testNum <<endl;

 return 0; 
}
