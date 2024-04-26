/*
  Owen Kelley
  8 - 31 - 2022
  Algorithms
  home/studets/okelley/algo/program.cpp

  About: This progam demonstrates each of the different sorting algorithms
*/
  #include <iostream>
  #include <fstream>
  #include <string>
  #include <iomanip>
  #include <cmath>
  #include <algorithm>
  using namespace std;
/////////////////////////////////////////////////////////////////////////////////
  void sequentialSearch(int unsortedList[], int searchItem, int& location, int& counter);
  void exchangeSort(int unsortedList[], int& count);
  void fillArray(int myArray[], int Array2[], int arraySize);
  void binarySearch(int list[], int searchItem, int& location, int& counter);
  int fibRecursive(int n, int& recCount);
  int fibIterative(int size, int& itCount);
/////////////////////////////////////////////////////////////////////////////////
  int main()
  {
   cout<<endl;
   int count = 0;
   int exCount = 0;
   int biCount = 0;
   int recCount = 0;
   int itCount = 0;

   int location = -1;
// List 0 - 99 to sort through
   int unsortedList[100];
   int Array2[100];
   fillArray(unsortedList, Array2, 100);

//////////////////////////////////////////////////////////////////////////
   cout <<"------------------------------------------------------------"<<endl;
   cout<<"   This program searches the array for the number 55 and "<<endl
       <<"   returns the position of that number in the array"<<endl
       <<"   Array1 used on Sequential Search"<<endl
       <<"   Array2 used on Binary Search (Exchange Sort used on Array2)"<<endl;
//////////////////////////////////////////////////////////////////////////
   cout <<"------------------------------------------------------------"<<endl;
   location = -1;
   if(location != -1)
   {
    cout <<"   Before Sequential Search:  "<< location <<endl<< endl;
   }
   else
   {
    cout <<"   Before Sequential Search:  No location found"<< endl;
   }

   sequentialSearch(unsortedList, 55, location, count);
   if(location != -1)
   { 
    cout <<"   After Sequential Search:  "<< location << endl;
    cout <<"   Count = "<<count<<endl;
   }
   else
   {
    cout <<"   After Sequential Search:  No location found"<< endl;
    cout <<"   Count = "<<count<<endl;
   }
//////////////////////////////////////////////////////////////////////////
   cout <<"------------------------------------------------------------"<<endl;
   location = -1;
   cout<<"   ** Exchange Sort **"<<endl;
   exchangeSort(Array2, exCount);
   cout<<"   Number of exchanges = "<<exCount<<endl;
//////////////////////////////////////////////////////////////////////////
   cout <<"------------------------------------------------------------"<<endl;
   location = -1;   
   binarySearch(Array2, 55, location, biCount);

   if(location != -1)
   {
    cout <<"   Binary Search Found:  "<< location << endl;
    cout <<"   Count = "<<biCount<<endl;
   }
   else
   {
    cout <<"   Binary Search Found:  No location found" << endl;
    cout <<"   Count = "<<biCount<<endl;
   }
   cout <<"------------------------------------------------------------"<<endl;

//////////////////////////////////////////////////////////////////////////
   int input;
   cout<<"   Enter the number you want Fibonacci-ed:  ";
   cin>>input;
   cout<<endl;

   cout<<"   Fib Recursive "<<input<<" = "
       <<fibRecursive(input, recCount)<<endl;
   cout<<"   Recursive Counter: "<< recCount <<endl;
   cout <<"------------------------------------------------------------"<<endl;

   cout<<"   Fib Iterative of "<<input<<" =  "
       <<fibIterative(input, itCount)<<endl;
   cout<<"   Iterative Counter: "<< itCount <<endl;
   cout <<"------------------------------------------------------------"<<endl;

   cout<<endl;
   return 0;
  }

/////////////////////////////////////////////////////////////////////////////////
  void fillArray(int myArray[], int Array2[], int arraySize)
  {
   srand(time(0));
   for(int i = 0; i < arraySize; i++)
   {
    int numRand = rand()  % 100;
    myArray[i] = numRand;
   }
   for(int i = 0; i < arraySize; i++)
   {
    int numRand = rand()  % 100;
    Array2[i] = numRand;
   }
  } 
/////////////////////////////////////////////////////////////////////////////////
  void sequentialSearch(int unsortedList[], int searchItem, int& location, int& counter)
  {
   for(int i=0 ; i<100 ; i++)
   {
    counter = counter + 1;
    if(searchItem == unsortedList[i])
    {
     location = i;
     break;
    }
   }
  }
/////////////////////////////////////////////////////////////////////////////////

  void exchangeSort(int unsortedList[], int& count)
  {
   int placeHolder;
   for(int i=0 ; i<100 ; i++)
   {
    for(int j=i+1 ; j<100 ; j++)
    {
     if(unsortedList[j] < unsortedList[i])
     {
      placeHolder = unsortedList[j];
      unsortedList[j] = unsortedList[i];
      unsortedList[i] = placeHolder; 
      count = count + 1;
     }
    }
   }
  }

/////////////////////////////////////////////////////////////////////////////////
  void binarySearch(int list[], int searchItem, int &location, int& counter)
  {
   int floor = 0;
   int ceiling = 99;
   int middle = 54;
   if(location == middle)
   {
    counter = counter + 1;
    location = middle;
   }
   while(floor < ceiling && location != middle)
   {
    counter = counter + 1;
    middle = (floor + ceiling) / 2;
    if(searchItem == list[middle])
    {
     location = middle;
    }
    else if(searchItem > list[middle])
    {
     floor = middle+1;
    }
    else if(searchItem < list[middle])
    {
     ceiling = middle-1;
    }
   }
  }
/////////////////////////////////////////////////////////////////////////////////
  int fibRecursive(int n, int& recCount)
  {
   if(n<=1)
   {
    return n;
   }
   else
   {
    recCount = recCount + 1;
    return fibRecursive(n-1, recCount) + fibRecursive(n-2, recCount);
   }
  }
/////////////////////////////////////////////////////////////////////////////////
  int fibIterative(int size, int& itCount)
  {
   int f[size];
   
   f[0]=0;
   if(size>0)
   {
    f[1]=1;
    for(int i=2 ; i<=size ; i++)
    {
     itCount = itCount + 1;
     f[i] = f[i-1] + f[i-2];
    }
   }   

   return f[size];
  }
/////////////////////////////////////////////////////////////////////////////////





