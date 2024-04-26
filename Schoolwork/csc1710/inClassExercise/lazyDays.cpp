/*
  Owen Kelley
  csc1710-03
  Dr Wei
  Program #1: Temp Inclass Activity
*/

  #include<iostream>
  #include<iomanip>
  using namespace std;

  int main(void)
{
//Initial Time
  int temp;
//USER INPUT
  cout << "What is the temperature?" << endl;
  cin >> temp;

//COMPUTATIONS
  if(95 < temp || temp < 20)
  {
   cout << "Visit our shops!" << endl;
  }
 
  else if(temp >= 80)
  {
   cout << "swimming" << endl;
  }

  else if(80 > temp && temp >= 60)
  {
   cout << "tennis" << endl;
  }

  else if(60 > temp && temp >= 40)
  {
   cout << "golf" << endl;
  }

  else if(40 > temp)
  {
   cout << "skiing" << endl;
  }

  return 0;
}


