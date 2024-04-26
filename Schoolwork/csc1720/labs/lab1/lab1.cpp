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
   int getData(string file, string names[], int scores[][5]);
   void printResults(string names[], int scores[][5], int numStudents, double carray[], char larray[]);   
   void calcAvg(string names[], int scores[][5], int numStudents, double avgScores[]);
   void letterGrade(double grade[], int numStudents, char letters[]);

   int main() 
   {
    int num;
    string names[28];
    int scores[28][5];
    double carray[28];
    char larray[28];

    string fileName;
    cout <<"enter data file name"<< endl;
    cin >> fileName;
   
    num = getData(fileName, names, scores);

    calcAvg(names, scores, num, carray);
    letterGrade(carray, num, larray);
    printResults(names, scores, num, carray, larray);

    return 0;  
   }
/////////////////////////////////////////////////////////////////////////////////////
   int getData(string file, string names[], int scores[][5])
   {
    ifstream inFile;
    inFile.open(file);
    int count;
    int s = 0;
    int t = 0;

    inFile >> names[s];
    while(!inFile.eof() && s < 28)
    {
     //inFile >> scores[s][t];
     for(t=0 ; t < 5 ; t++)
     {
      inFile >> scores[s][t];
     }
     s = s + 1;
     inFile >> names[s];
    }
    inFile.close();
    return s;
   }
/////////////////////////////////////////////////////////////////////////////////////
   void printResults(string names[], int scores[][5], int numStudents, double carray[], char larray[])
   {
    int s = 0;
    for(s=0 ; s < numStudents ; s++) 
    {    
     cout << names[s] << " ";
     //display 5 scores
     for(int t = 0 ; t<5 ; t++)
     {
      cout << scores[s][t] << " ";
     }
     cout << "Average: " << carray[s] <<" ";
     cout << "Letter grade: " << larray[s];
     cout<<endl;
     s = s + 1;
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
    int s = 0;

    while(!cin.eof())
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
      s = s + 1;
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

