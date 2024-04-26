/*
  Owen Kelley
  csc1710-03
  Dr Wei
  LAB 6 - LEAP YEAR
*/

  #include<iostream>
  #include<iomanip>
  #include<string>
  using namespace std;

  int main(void)
{
//Initial Time
  int year;
  int leapYear;
  int oddYear;
  int weirdYear;
  int currentYear;
  string past;
  string future;
  string future1;
//USER INPUT
  cout << "What is the current year?" << endl;
  cin >> currentYear;
  cout << "Enter year to see if it is a leap year." << endl;
  cin >> year;
  cout << endl;
//LEAPYEAR & ODDYEAR ASSIGNMENT
  leapYear = year % 4;
  oddYear = year % 100;
  weirdYear = year % 400;  
  
//START : FUTURE/PAST TENSE
  if(currentYear < year)
  {
   future = "will";
   future1 = " be";
  }
  else
  {
   past = "was";
  } 
//END : FUTURE/PAST TENSE 

//START : BEFORE/AFTER GREGORIAN CALENDER
  if(year)
  {
   if(year < 1582)
   {
    cout << "Error! " << year << " was before the adoption of the Gregoian calender" << endl;
   }
//END : BEFORE/AFTER GREGORIAN CALENDER

//START: DIVISIBLE BY 400 LEAP YEARS
   else if (oddYear == 0)
   {
    if(weirdYear == 0)
    {
     cout << year <<" "<< future << future1 << past << " a leap year" << endl;
    }
    else
    {
     cout << year <<" "<< future << past << " not" << future1 << " a leap year" << endl;
    }
   }
//END: DIVISIBLE BY 400 LEAP YEARS

//START : STANDARD LEAP YEAR CALCULATIONS
   else if (leapYear == 0)
   {
    cout << year <<" "<< future << future1 << past << " a leap year" << endl;
   } 
   else
   {
    cout << year <<" "<< future << past << " not" << future1 << " a leap year" << endl;
   }
  }
//END : STANDARD LEAP YEAR CALCULATIONS
  
//ERROR STATEMENT
  else
  {
   cout << "Year not properly defined" << endl;
  }


  return 0;
}
