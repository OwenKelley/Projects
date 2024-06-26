//Thisprogram tests various operations of an unordered linked list
/*
  Owen Kelley
  4 - 4 - 2022
  1720 - 01

  About: Tests the unordered class

  Compiling instructions: g++ -o testUnordered ullTest.cpp
*/

#include<iostream>
#include"unorderedLinkedList.h"
#include"external.cpp"

using namespace std; 

int main()
{
   unorderedLinkedList<int> listA, listB;          
   int num;                                        

   cout << "Creating list with input 22 7 48 93 14 2 " << endl ;

   listA.insertLast(22);                      
   listA.insertLast(7);
   listA.insertLast(48);
   listA.insertLast(93);        
   listA.insertLast(14);
   listA.insertLast(2);
   listA.print();
   cout << endl;
   cout<<"Delete Largest"<<endl;
   listA.deleteLargest();
   
   cout << endl;                       

   cout << "listA: ";                      
   listA.print();                                  
   cout << endl;                                   

   cout <<"Average:"<< endl;
   cout<<findAvg(listA)<<endl;

   cout << "Length of listA: " << listA.length() << endl;                 

   listB = listA;	   //test the assignment operator 

   cout << endl;
   cout << "listB: ";                     
   listB.print();                                  
   cout << endl;                                   

   cout <<"Average:"<< endl;
   cout<<findAvg(listB)<<endl;

   cout << "Length of listB: " << listB.length() << endl;                 

   cout << endl;
   cout << "Enter the number to be " << "deleted: ";                           
   cin >> num;                                     

   listB.deleteNode(num);                          
	
   cout << "After deleting " << num << endl;
   cout << "listB: " ;                     
   listB.print();                                  
   cout << endl;                                

   cout <<"Average:"<< endl;
   cout<<findAvg(listB)<<endl;

   cout << "Length of listB: " << listB.length() << endl;              
   cout << endl;

   cout << "Output listA " << "using an iterator:" << endl;            

   linkedListIterator<int> it;                  

   for (it = listA.begin(); it != listA.end(); ++it)                  
       cout << *it << " ";                        
   cout << endl;

   unorderedLinkedList<char> listC;          
   char x;                                 

   cout << endl << "Creating list with input A K M G ! C " << endl ;

   listC.insertLast('A');                      
   listC.insertLast('K');
   listC.insertLast('M');
   listC.insertLast('G');        
   listC.insertLast('!');
   listC.insertLast('C');
       
   cout << endl;                                   

   cout << "listC: ";                      
   listC.print();                                  
   cout << endl;                                   
   cout << "Length of listC: " << listC.length() << endl;  

   cout<< endl << "Enter the character to be " << "deleted: ";                           
   cin >> x;                                     

   listC.deleteNode(x);                          
	
   cout << "After deleting " << x << endl;
   cout << "listC: " ;                     
   listC.print();                                  
   cout << endl;                         

   return 0;					
}



