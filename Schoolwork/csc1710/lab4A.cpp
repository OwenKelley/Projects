/*
  Owen Kelley
  csc1710-03
  Dr Wei
  Lab 4-A
*/

  #include<iostream>
  #include<iomanip>
  using namespace std;

  int main(void)
{
//Lab Grade
  double lab1;
  double lab2;
  double lab3;
  double lab4;
//Quiz Grades
  double quiz1;
  double quiz2;
  double quiz3;
//Program Grade
  double program;
//Test Grade
  double test;
//Averages
  double labavg;
  double quizavg;
//INPUT FROM USER
  cout <<"Please enter your lab grade, your quiz grade, your program grade, and your test grade." << endl;
  cin>> lab1 >> lab2 >> lab3 >> lab4;
  labavg = (lab1 + lab2 + lab3 + lab4) / 4.0;
  cin>> quiz1 >> quiz2 >> quiz3;
  quizavg = (quiz1 + quiz2 + quiz3) /3.0;
  cin>> program;
  cin>> test;

/*INPUT FROM COMPUTER
  cin>> lab1 >> lab2 >> lab3 >> lab4;
  labavg = (lab1 + lab2 + lab3 + lab4) / 4.0;
  cin>> quiz1 >> quiz2 >> quiz3;
  quizavg = (quiz1 + quiz2 + quiz3) /3.0;
  cin>> program;
  cin>> test;
*/

//FINAL CALCULATION
  cout << 100.0*(labavg * 0.1 + quizavg * 0.1 + program * 0.06 + test * 0.1)/36.0 <<"%"<< endl;


  return 0;

}

