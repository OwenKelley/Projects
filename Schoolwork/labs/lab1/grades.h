
/*
  Owen Kelley
  1/11/2022
  1720 - 01
  home/students/okelley/csc1720/labs/lab1

  Compiling instructuctions: g++ gradesmain.cpp gradesImp.cpp
*/

///////////////////////////////////////////////////////////////////////////////////////////
/*
  getData - Opens and reads data from selected file and stores data for use
  Precondition: this will get data from a file the user enters
  Postcondition: it will fill an array with the names and scores from the inputted data file

  calcAvg - Averages the 5 student scores for each student
  Precondition: Takes in data from the scores array
  Postcondition: Outputs an average of 5 scores into an array of averages

  letterGrade - Translates grades into a letter grade
  Precondition: Takes in data from the averages array
  Postcondition: Stores translated letter values in an array of letter grades

  printResults - Outputs data in a table
  Precondition: Takes in names, scores, averages, and letter grades
  Postcondition: creates a table and places data into the columns
*/ 
  #include <iostream>
  #include <fstream>
  #include <string>
  #include <iomanip>
  using namespace std;

  const int NUM_ROW = 28;
  const int NUM_COL = 5;
//Prototypes
  int getData(string Name[], int Scores[][NUM_COL]);
  void calcAvg(int Scores[][NUM_COL], double average[], int s);
  void letterGrade(char LGrade[], double average[], int s);
  void printResults(string Name[], double average[], int Scores[][NUM_COL], char LGrade[], int s);


