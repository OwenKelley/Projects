/*
  Owen Kelley
  1 - 18 - 2022
  1720 - 01
  home/studets/okelley/cscs1720/labs/lab2.cpp

  About: This progam takes in a datafile consisting of first name, last name, ID numbers, and birthdays. It can find the age of the members of the data file and return the information of the users who have a certain age

  Compiling instructions: g++ lab2.cpp
*/
  #include <iostream>
  #include <fstream>
  #include <string>
  #include <iomanip>
  using namespace std;
////////////////////////////////////////////////////////////////
  struct dateType
  {
   int month;
   int day;
   int year;
  };

  struct personType
  {
   string firstName;
   string lastName;
   int IDnum;
   dateType birthday;
  };
////////////////////////////////////////////////////////////////////
//Prototypes
  void loadInfo(personType person[], int &counter);
  void readDate(dateType &mdy);
  void calcAge(dateType mdy, personType person[], int age[], int counter);
  void printInfo(dateType mdy, personType person[], int age[], int select);
  void searchAge(personType person[], int counter, int age[], dateType mdy);
////////////////////////////////////////////////////////////////////
  int main()
  {
   int MAX = 50;
   dateType mdy;
   mdy.month = 0;
   mdy.day = 0;
   mdy.year = 0;
   personType person[MAX];
   int counter = 0;
   int age[MAX];

   loadInfo(person, counter);
   
   readDate(mdy);
   calcAge(mdy, person, age, counter);
   searchAge(person, counter, age, mdy);

   return 0;
  }
////////////////////////////////////////////////////////////////////
/*
  loadInfo - Loads input data for further use

  Precondition: Takes in a specified datafile 
  Postcondition: Loads information into a struct and establishes number of members in the datafile
*/
  void loadInfo(personType person[], int &counter)
  {
   ifstream inFile;
   string datafile;
   cout <<"Enter name of datafile: "<< endl;
   cin >> datafile;
   inFile.open(datafile);
   if(!inFile)
   {
      cout << "Cannot open the input file. Program will terminate." << endl;
   }
//Load data into array until EOF
   while(!inFile.eof() && counter < 50)
   {
    inFile >> person[counter].firstName;
    inFile >> person[counter].lastName;
    inFile >> person[counter].IDnum;
    inFile >> person[counter].birthday.month;
    inFile >> person[counter].birthday.day;
    inFile >> person[counter].birthday.year;

    counter = counter + 1;
   }
   counter = counter - 1;
   inFile.close();
  }
//////////////////////////////////////////////////////////////////////
/*
  readDate - enters  current time
  
  precondition: takes in month/day/year struct
  postcondition: save current date
*/
  void readDate(dateType &mdy)
  {
   cout <<"Enter current time"<<endl;
   cout <<"Enter Month: "<< endl;
   cin >> mdy.month;
   cout <<"Enter Day: "<< endl;
   cin >> mdy.day;
   cout <<"Enter Year: "<< endl;
   cin >> mdy.year;
  }
//////////////////////////////////////////////////////////////////////
/*
  calcAge - Calculates the age of a user

  precondition: Inputs the current time and takes in saved birthdays
  postcondition: Saves data in an age array
*/
  void calcAge(dateType mdy, personType person[], int age[], int counter)
  {
// Clean array
   for(int w = 0 ; w < 50 ; w++) 
   {
    age[w] = 0;
   }
   for(int i = 0 ; i < counter ; i++)
   {
    age[i] = mdy.year - person[i].birthday.year;

    if(mdy.month < person[i].birthday.month) 
    {
     age[i] = age[i] - 1;
    }
    else if(mdy.month == person[i].birthday.month)
    {
     if(mdy.day < person[i].birthday.day)
     {
      age[i] = age[i] - 1;
     }
    }
   }
  }
////////////////////////////////////////////////////////////////////
/*
  searchAge - Finds all persons of a specific age

  precondition: inputs users age
  postcondition: outputs users of the specific age
*/  
  void searchAge(personType person[], int counter, int age[], dateType mdy)
  {
   int searchAge;
   cout <<"Insert search age: ";
   cin >> searchAge;
   for(int i = 0 ; i < counter ; i++)
   {
    if(age[i] == searchAge)
    {
     printInfo(mdy, person, age, i);
    }
   }
  }
////////////////////////////////////////////////////////////////////////////
/*
  printInfo - prints user name, ID, birthday, and age

  precondition: takes in the person array along with the month day year struct and the age array
  postcondition: Outputs Name, ID, Birthday, and Age
*/
  void printInfo(dateType mdy, personType person[], int age[], int select)
  {
   cout <<"Name: " << person[select].firstName <<" "<< person[select].lastName << endl
        <<"ID: "<< person[select].IDnum << endl
        <<"Birthday: "<< person[select].birthday.month <<"/"<< person[select].birthday.day <<"/"<< person[select].birthday.year << endl
        <<"Age: "<< age[select] << endl;
  }


