/*
   Owen Kelley
   csc1710-03
   Dr Wei
   LAB 10 - Writing Functions
*/

   #include<string>
   #include<iostream>
   #include<fstream>
   #include<iomanip>
   #include<cmath>
   using namespace std;

   int arraySize(string file);
   void loadArray(string file, int a[], int size);
   void printArray(int values[], int size);
   int median(int values[], int size);
   int maximum(int values[], int size);
   int minimum(int values[], int size);
   void sortArray(int values[], int size);
   int searchArray(int values[], int size, int searchItem);
///////////////////////////////////////////////////////////

////////////////////////////////////////////////////////////
   int main ()
   {
    int size;
    int searchItem;
    string dataFile;

    cout << "Enter Name of the Data File: ";
    cin >> dataFile;
    size = arraySize(dataFile);
    cout<<"size = "<<size<<endl;
    cout << "Enter the number you want to search: ";
    cin >> searchItem;


    int data[size]; 

    loadArray(dataFile, data, size);
    cout << endl;
    printArray(data, size);
    cout << endl;
    sortArray(data, size);
    printArray(data, size);
    cout << endl;
    cout << "Median = " << median(data, size) << endl;
    cout << "Maximum = " << maximum(data, size) << endl;
    cout << "Minimum = " << minimum(data, size) << endl;

    cout << searchArray(data, size, searchItem) << endl;

    return 0;
   }
/////////////////////////////////////////////////////////////////
   int minimum(int values[], int size)
   {
    int min = values[0];
    for(int i = 0 ; i<size ; i++)
    {
     if(values[i] < min)
     {
      min = values[i];
     }
    }
    return min;
   }
////////////////////////////////////////////////////////////////////
   int maximum(int values[], int size)
   {
    int max = values[0];
    for(int i = 0 ; i<size ; i++)
    {
     if(values[i] > max)
     {
      max = values[i];
     }
    }
    return max;
   }
////////////////////////////////////////////////////////////////////
   int median(int values[], int size)
   {
    int med;
    int medium;
    medium = (size-1) / 2;
    med = values[medium];

    return med;
   }
////////////////////////////////////////////////////////////////
   int searchArray(int values[], int size, int searchItem)
   {
    int num = 0;
    for(int i = 0 ; i<size ; i++)
    {
     if(values[searchItem])
     {
      num = values[searchItem];
     }
    }
    return num;
   }
/////////////////////////////////////////////////////////////////
   void sortArray(int values[], int size)
   {
    for(int j = 0 ; j < size ; j++)
    {
     for(int i = 0 ; i < size - j ; i++)
     {
      if(values[i] > values[i+1])
      {
       int temp = values[i];
       values[i] = values[i+1];
       values[i+1] = temp;
      }
     }
    }
   } 
////////////////////////////////////////////////////////////////

    ifstream inFile;
    inFile.open(file);

    inFile>>x;

    while(inFile && x!=-1)
    {
     size ++;
     inFile>>x;
    }

    inFile.close();
    return size;
   }
///////////////////////////////////////////////////////////////////
   void loadArray(string file, int a[], int size)
   {
    ifstream inFile;
    inFile.open(file);

    for(int i=0 ; i<size ; i++)
    {
     inFile>>a[i];
    }
    inFile.close();
   }
////////////////////////////////////////////////////////////////////
   void printArray(int values[], int size)
   {
    for (int j=0; j<size; j++)
    {
     cout<<j<<" "<<values[j]<<endl;
    }
   }
///////////////////////////////////////////////////////////////////

