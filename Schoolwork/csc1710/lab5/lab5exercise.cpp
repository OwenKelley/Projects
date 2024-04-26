/*
 Owen Kelley
  csc1710-03
  Dr Wei
  Lab 5
*/

  #include<iostream>
  #include<iomanip>
  #include<string>
  #include<fstream>
  using namespace std;

  int main(void)
{
//Variables
  
  ifstream inFile;
  ofstream outFile;

  string Firstname;
  string Lastname;
  string department;
  double monthGrossSal;
  double monthBonus;
  double taxes;
  double totalNoTax;
  string paycheck;
  double distanceTravel;
  double travelTime;
  string avgSpeed;
  double numCoffeeSold;
  double cost;
  string salesAmount;

//FILE SELECTION
  inFile.open("inData.txt");
  outFile.open("outData.txt");

  if (inFile)
 {
  //COMPUTER INPUT
  inFile >> Firstname;
  inFile >> Lastname;
  inFile >> department;
  inFile >> monthGrossSal;
  inFile >> monthBonus;
  inFile >> taxes;
  inFile >> distanceTravel;
  inFile >> travelTime;
  inFile >> numCoffeeSold;
  inFile >> cost;
  inFile >> salesAmount;

  totalNoTax = monthGrossSal * (monthBonus * 0.01 + 1);

  //FINAL CALCULATION
  outFile << "Name: " <<Firstname <<" "<< Lastname <<", Department:  "<< department <<endl
          << "Monthly Gross Salary: $" << monthGrossSal << ", MonthlyBonus: " << monthBonus << "%, Taxes: " << taxes << "%" <<endl
          << "Paycheck: $" << totalNoTax - ((taxes * 0.01) * totalNoTax) <<endl<<endl
          
          << "Distance Traveled: " << distanceTravel <<" miles, Traveling Time: "<< travelTime << " hours" <<endl
          << "Average Speed: " << distanceTravel / travelTime <<" miles per hour"<<endl<<endl
          << "Number of Coffee Cups Sold: " << numCoffeeSold <<", Cost: $ "<< cost <<" per cup"<<endl
          << "Sales Amount: $" << numCoffeeSold * cost << endl;


}
  else
     cout << "Input failure!" << endl;


  inFile.close();
  outFile.close();
  return 0;

}

