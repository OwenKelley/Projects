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
/*///////////////////////////////////////////////////////////////////////////////////
   const int NUM_ROW = 28;
   const int NUM_COL = 5;
*////////////////////////////////////////////////////////////////////////////////////
   void getData(string file, string names[], int scores[][5], int numStudents);
   void printResults(string names[], int scores[][5], int numStudents, double carray[], char larray[]);   
   void calcAvg(string names[], int scores[][5], int numStudents, double avgScores[]);
   void letterGrade(double grade[], int numStudents, char letters[]);

   int main() 
   {
    string names[10];
    int scores[10][5];
    double carray[10];
    char larray[10];

    string fileName;
    cout <<"enter data file name"<< endl;
    cin >> fileName;
   
    getData(fileName, names, scores, 10);

    calcAvg(names, scores, 10, carray);
    letterGrade(carray,10,larray);
    printResults(names, scores, 10, carray, larray);

    return 0;  
   }
/////////////////////////////////////////////////////////////////////////////////////
   void getData(string file, string names[], int scores[][5], int numStudents)
   {
    ifstream inFile;
    inFile.open(file);

    for(int s = 0 ; s < numStudents ; s++)
    {
     inFile >> names[s];
     //read in 5 test scores
     for(int t=0 ; t < 5 ; t++)
     {
      inFile >> scores[s][t];
     }
    }
    inFile.close();
   }
/////////////////////////////////////////////////////////////////////////////////////
   void printResults(string names[], int scores[][5], int numStudents, double carray[], char larray[])
   {    
    for(int s=0 ; s < numStudents/*10*/ ; s++)
    {
     cout << names[s] << " ";
     //display 5 scores
     for(int t = 0 ; t<5 ; t++)
     {
      cout << scores[s][t] << " ";
     }
     cout << carray[s];
     cout << "Letter grade: " << larray[s];
     cout<<endl;
    }
   }
/////////////////////////////////////////////////////////////////////////////////////
   void calcAvg(string names[], int scores[][5], int numStudents, double avgScore[])
   {
    int avg1 = 0;
    int avg2 = 0;
    int avg3 = 0;
    int avg4 = 0;
    int avg5 = 0;
    double finAvg = 0;
    for(int s = 0 ; s < numStudents ; s++)
    {
     for(int t = 0 ; t<5 ; t++)
     {
      if(t==0)
      {
       avg1 = scores[s][t];
      }
      else if(t==1)
      {
       avg2 = scores[s][t];
      }
      else if(t==2)
      {
       avg3 = scores[s][t];
      }
      else if(t==3)
      {
       avg4 = scores[s][t];
      }
      else if(t==4)
      {
       avg5 = scores[s][t];
       finAvg = (avg1 + avg2 + avg3 + avg4 + avg5)/5;
       avgScore[s] = finAvg;
      }
     }
    }
   }
//////////////////////////////////////////////////////////////
   void letterGrade(double grade[],int numStudents, char letters[])
   {
    for(int i=0; i<numStudents; i++)
    {
     if(grade[i] >= 90)
     {
      letters[i]='A';
     }
     else if(grade[i] >= 80)
     {
      letters[i]='B';
     }
     else if(grade[i] >= 70)
     {
      letters[i]='C';
     }
     else if(grade[i] >= 60)
     {
      letters[i]='D';
     }
     else
     {
      letters[i]='F';
     }
    }
   }

