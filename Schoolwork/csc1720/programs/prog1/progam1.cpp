/*
  Owen Kelley
  1 - 27 - 2022
  1720 - 01
  home/studets/okelley/cscs1720/programs/program1.cpp

  About: Takes in 12 soccer players names, positions, games played, goals, shots, minutes played, calculates shot percentage, sorts the  players alphabetically

  Compiling instructions: g++ progam1.cpp
*/
  #include <iostream>
  #include <fstream>
  #include <string>
  #include <iomanip>
  using namespace std;
///////////////////////////////////////////////////////////////////////////////////////////////////////
  struct playerStat
  {
   string name;
   string position;
   int gamesPlayed;
   int goals;
   int shots;
   int min;
   double shotPer;
  };
///////////////////////////////////////////////////////////////////////////////////////////////////////
//Prototypes
  void loadInfo(playerStat players[], int &counter, int MAX);
  void calcShot(playerStat players[], int MAX);
  void highestShot(playerStat players[], int MAX);
  void sort(playerStat players[], playerStat temp[], int MAX);
  void printTable(playerStat players[], int counter);
///////////////////////////////////////////////////////////////////////////////////////////////////////
  int main()
  {
   int MAX = 12;
   playerStat players[MAX];
   playerStat temp[MAX];
   int counter = 0;

   loadInfo(players, counter, MAX);
   calcShot(players, MAX);
   cout<<"Nonsorted"<<endl;
   printTable(players, MAX);
   sort(players, temp, MAX);
   cout<<"Sorted"<<endl;
   printTable(players, MAX);
   highestShot(players, MAX);

   return 0;
  }
/////////////////////////////////////////////////////////////////////////////////////////////////////
/*
  loadInfo - Loads input data for further use

  Precondition: Takes in a specified datafile 
  Postcondition: Loads information into a struct and establishes number of members in the datafile
*/
  void loadInfo(playerStat players[], int &counter, int MAX)
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
   while(!inFile.eof() && counter < MAX)
   {
    inFile >> players[counter].name;
    inFile >> players[counter].position;
    inFile >> players[counter].gamesPlayed;
    inFile >> players[counter].goals;
    inFile >> players[counter].shots;
    inFile >> players[counter].min;

    counter = counter + 1;
   }
   counter = counter - 1;
   inFile.close();
  }
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/*
  calcShot - Calculates shot percentage

  Precondition: Takes in the players goals and divides it by their shots then multiplies by 100 to get the percentage
  Postcondition: Loads the shot percentage into the struct
*/
  void calcShot(playerStat players[], int MAX)
  {
   for(int i=0 ; i < MAX ; i++)
   {
    if(players[i].shots > 0)
    {
     players[i].shotPer = (static_cast<double>(players[i].goals) / static_cast<double>(players[i].shots)) * 100;
    }
    else
    {
     players[i].shotPer = 0;
    }
   }
  }
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/*
  highestShot - Finds the person with the highest shot percentage

  Precondition: Takes in all of the players shot percentages
  Postcondition: Outputs the player with the highest shot percentage
*/
  void highestShot(playerStat players[], int MAX)
  {
   int i;
   double largest = 0;
   int largestPos = 0;
   for(i=0 ; i < MAX ; i++)
   {
    if(players[i].shotPer > largest)
    {
     largest = players[i].shotPer;
     largestPos = i;
    }
   }
   cout << players[largestPos].name <<" has the highest shot percentage at: "<< players[largestPos].shotPer <<"%"<<endl;
  }
///////////////////////////////////////////////////////////////////////////////////////////////////////////////
/*
  sort - sorts out players names alphabetically

  Precondition: Takes in all the players names
  Postcondition: Reorganizes the struct of names into alphabetical order
*/

//Bubble sort
  void sort(playerStat players[], playerStat temp[], int MAX)
  {
   int j;
   for(int i = 0 ; i < MAX ; i++)
   {
    for(j = 0 ; j < MAX-i ; j++)
    {
     if(players[j].name > players[j+1].name)
     {
      temp[j] = players[j];
      players[j] = players[j+1];
      players[j+1] = temp[j]; 
     }
    }
   }
  }
/////////////////////////////////////////////////////////////////////////////////////////////////////////////
/*
  printTable - Prints out the table of players, positions, games played, goals, shots, minutes, shot percentage

  Precondition: Takes in struct of 12 players
  Postcondition: Creates table with all the information of the players
*/
  void printTable(playerStat players[], int counter)
  {
   cout << "Team Roster:                    " << endl;
   cout << "--------------------------------------------------------------------------------------" << endl;
   cout << "      Name       |     Position     |   GP   |   G   |   SH   |   Mins   |   Shot%   |    " << endl;
   cout << "--------------------------------------------------------------------------------------" << endl;

   for(int i = 0 ; i < counter ; i++)
   {
    cout<<" "<<left<<setw(16)<< players[i].name <<"|"
             <<left<<setw(18)<< players[i].position<<"|"
             <<right<<setw(8)<< players[i].gamesPlayed <<"|"
             <<right<<setw(7)<< players[i].goals<<"|"
             <<right<<setw(8)<< players[i].shots<<"|"
             <<right<<setw(10)<< players[i].min <<"|"
             <<right<<setw(10)<<fixed<<setprecision(1)<< players[i].shotPer <<"%|"<< endl;
   }
   cout<<endl;
  }











