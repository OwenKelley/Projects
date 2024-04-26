
/*FILE INPUT AND SAVING TEST*/
  #include<iostream>
  #include<fstream>
  using namespace std;

int main(void)
{
//FILE VARIABLE-ING
  ifstream inData;
  ofstream outData;

//VARIABLE
  double payrate;

//FILE SELECTION
  inData.open("inputdata1.data");
  outData.open("outdata1.out");

//COMPUTATIONS
  inData >> payrate;
  outData << "The paycheck is: $" << payrate << endl;

//CLOSE THE FILES & RESULT
  inData.close();
  outData.close();
  return 0;
}
