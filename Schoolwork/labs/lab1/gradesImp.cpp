
/*
  These are the functions used to read in data, calculate averages, calculate letter grades, and print grades

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
  #include "grades.h" 
  using namespace std;

////////////////////////////////////////////////////////////////////////////////////////////
  int getData(string Name[], int Scores[][NUM_COL])
  {
   ifstream inFile;
   string filename;
   int i = 0;
   cout << "Enter your file name: ";
   cin >> filename;

   inFile.open(filename);
   if(!inFile)
   {
      cout << "Cannot open the input file. Program will terminate." << endl;
      return 1;
   }
//Load data into array until EOF
   while(!inFile.eof() && i < NUM_ROW)
   {
    inFile >> Name[i];
    inFile >> Scores[i][0];
    inFile >> Scores[i][1];
    inFile >> Scores[i][2];
    inFile >> Scores[i][3];
    inFile >> Scores[i][4];
    i = i + 1;
   }

   inFile.close();
   return i - 1;
  }
///////////////////////////////////d////////////////////////////////////////////////////////
  void calcAvg(int Scores[][NUM_COL], double average[], int s)
  {
   double finAvg = 0;
   double avg1 = 0, avg2 = 0, avg3 = 0, avg4 = 0, avg5 = 0;
//Average student scores
   for(int i=0 ; i < s ; i++)
   {
    for(int j=0; j < NUM_COL ; j++)
    {
     if(j==0)
     {
      avg1 = Scores[i][j];
     }
     else if(j==1)
     {
      avg2 = Scores[i][j];
     }
     else if(j==2)
     {
      avg3 = Scores[i][j];
     }
     else if(j==3)
     {
      avg4 = Scores[i][j];
     }
     else if(j==4)
     {
      avg5 = Scores[i][j];
      finAvg = (avg1 + avg2 + avg3 + avg4 + avg5)/5;
      average[i] = finAvg;
     }
    }
   }
  }
/////////////////////////////////////////////////////////////////////////////////////////
  void letterGrade(char LGrade[], double average[], int s)
  {
//Turns averages into letter grades
   for(int i=0; i<s; i++)
   {
    if(average[i] >= 90)
    {
     LGrade[i]='A';
    }
    else if(average[i] >= 80)
    {
     LGrade[i]='B';
    }
    else if(average[i] >= 70)
    {
     LGrade[i]='C';
    }
    else if(average[i] >= 60)
    {
     LGrade[i]='D';
    }
    else
    {
     LGrade[i]='F';
    }
   }
  }
////////////////////////////////////////////////////////////////////////////////////////////////////
  void printResults(string Name[], double average[], int Scores[][NUM_COL], char LGrade[], int s)
  {
   cout << "                      Student's Test Results                    " << endl;
   cout << "----------------------------------------------------------------" << endl;
   cout << " Last Name |    Test Scores      | Average (%)   |    Letter Grade   " << endl;
   cout << "----------------------------------------------------------------" << endl;
   for(int row = 0; row < (s-1); row++)
   {
    cout << left << setw(10) << Name[row];
    for(int i=0 ; i < NUM_COL ; i++)
    {
     cout << right << setw(4) << Scores[row][i];
    }
    cout << right << setw(11) << setprecision(2) << average[row];
    cout <<"         "<< left << setw(10) << LGrade[row];
    cout << endl;
   }
  }





