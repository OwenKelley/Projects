/* 
  Owen Kelley
  csc1710-03
  Dr Wei
  Program #1: Seconds Converter
*/

  #include<iostream>
  #include<iomanip>
  using namespace std;

  int main(void)
{
//Initial Time
  int seconds;
  int hours;
  int minutes;
//Final Time
  int finseconds;
  int finminutes;
  int finhours;
  int findays;
//USER INPUT
  cout << "What is the total whole number of seconds (below 2,147,483,647) in the time interval?" << endl;
  cin >> seconds;

//COMPUTATIONS DAYS
  findays = seconds / 86400;

//COMPUTATIONS HOURS
  hours = seconds / 3600;
  finhours = hours - findays * 24; 

//COMPUTATIONS MINUTES
  minutes = seconds / 60;
  finminutes = minutes - hours * 60;

//COMPUTATIONS SECONDS
  finseconds = seconds - minutes * 60; 

//OUTPUT
  cout << "Days = " << findays << endl;
  cout << "Hours = " << finhours << endl;
  cout << "Minutes = " << finminutes << endl;
  cout << "Seconds = " << finseconds << endl;

  return 0;
}

