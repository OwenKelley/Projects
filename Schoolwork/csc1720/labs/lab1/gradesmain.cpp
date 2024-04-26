/*
  This is the main program that takes in grade data and uses functions to display a table of students, scores, average grade, letter grade, and average class grade

  Compiling instructuctions: g++ gradesmain.cpp gradesImp.cpp
*/

//////////////////////////////////////////////////////////////////////////////

  #include <iostream>
  #include <fstream>
  #include <string>
  #include <iomanip>
  #include "grades.h"
  using namespace std;

  int main()
  {
   string name[NUM_ROW];
   int scores[NUM_ROW][NUM_COL], n = 0;
   char grade[NUM_ROW];
   double avg[NUM_ROW], classavg = 0;

   n = getData(name, scores);
   calcAvg(scores, avg, n);
   letterGrade(grade, avg, n);
   printResults(name, avg, scores, grade, n);
   cout << endl;
//Code to get class average
   for(int i = 0; i < n; i++)
   {
    classavg = classavg + avg[i];
   }
   classavg = classavg / n;

   cout << "The overall class average is: " << classavg << "% " << endl;

   return 0;
  }



