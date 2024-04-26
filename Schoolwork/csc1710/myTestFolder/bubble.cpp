
   #include<string>
   #include<iostream>
   #include<fstream>
   #include<iomanip>
   #include<cmath>
   using namespace std;

   void sortArray(int array[10], int size);
///////////////////////////////////////////////////////////

////////////////////////////////////////////////////////////
   int main ()
   {
    int size = 10;
    int searchItem;
    string dataFile;

    int array[10] = {1,2,3,4,5,9,8,7,6};
    cout<<"size = "<<size<<endl;
    cout << "Enter the number you want to search: ";
    cin >> searchItem;


    int data[size];

    cout << endl;
    sortArray(array[10], size);

    return 0;
   }
/////////////////////////////////////////////////////
   void sortArray(int array[10], int size)
   {
    for(int j = 0 ; j < size ; j++)
    {
     for(int i = 0 ; i < size - j ; i++)
     {
      if(array[i] > array[i+1])
      {
       int temp = array[i];
       array[i] = array[i+1];
       array[i+1] = temp;
      }
     }
    }
   }
