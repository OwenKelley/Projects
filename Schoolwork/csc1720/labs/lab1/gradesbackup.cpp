/*
  Owen Kelley
  1 - 11 - 2022
  1720 - 01
  home/studets/okelley/cscs1720/labs/lab1temp.cpp
*/
  #include <iostream>
  #include <fstream>
  #include <string>
  #include <iomanip>
  using namespace std;

//Constant variables
  const int NUM_ROW = 28;
  const int NUM_COL = 5;

//Prototypes
  int getData(string Name[], int Scores[][NUM_COL]);
  void calcAvg(int Scores[][NUM_COL], double average[], int s);
  void letterGrade(char LGrade[], double average[], int s);
  void printResults(string Name[], double average[], int Scores[][NUM_COL], char LGrade[], int s);

  int main()
  {
   string name[NUM_ROW];
   int scores[NUM_ROW][NUM_COL], n = 0;
   char grade[NUM_ROW];
   double avg[NUM_ROW], classavg = 0;//, sum = 0;

   n = getData(name, scores);
   calcAvg(scores, avg, n);
   letterGrade(grade, avg, n);
   printResults(name, avg, scores, grade, n);
   cout << endl;
//Write code to average the student averages
   for(int i = 0; i < n; i++)
   {
    classavg = classavg + avg[i];
   }
   classavg = classavg / n;
  
   cout << "The overall class average is: " << classavg << "% " << endl;

   return 0;
  }
////////////////////////////////////////////////////////////////////////////////////////// 
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
   //i = i - 1;
   return i - 1;
  }
///////////////////////////////////d////////////////////////////////////////////////////////
  void calcAvg(int Scores[][NUM_COL], double average[], int s)
  {
   double finAvg = 0;
   double avg1 = 0, avg2 = 0, avg3 = 0, avg4 = 0, avg5 = 0;
//Write a loop to add up the student's 5 test scores and calculate their average
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
//Write code to determine the letter grade of each student 
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
//Write a loop to output the rows in the table, text left-aligned and numerical values decimal-aligned
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






