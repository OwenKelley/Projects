
/*
1710 2:00pm class
Owen Kelley
Dr Wei
In class assignment
*/

#include<iostream>
using namespace std;

int main(void)

{
  double yourCircleCircumference;
  double yourCircleArea;
  double yourRadiusValue;
  double pie;
  pie = 3.1415;

//INPUT
  cout <<"What is the radius of the circle"<< endl;
  cin >> yourRadiusValue;

//CALCULATIONS
  yourCircleArea = pie * (yourRadiusValue * yourRadiusValue);
  yourCircleCircumference = 2 * pie * yourRadiusValue;

//FINAL OUTPUT
  cout <<"The radius of the circle = "<<yourRadiusValue<< endl;
  cout <<"The area of the circle = "<<yourCircleArea<< endl;
  cout <<"The circumference of the circle = "<<yourCircleCircumference<< endl;

  return 0;

}


