/*
  Owen Kelley
  csc1710-03
  Dr Wei
  Lab 3
*/

  #include<iostream>
  #include<iomanip>
  using namespace std;

  int main(void)

{

//Variables
  int p=17, q=4, r=3;
  double j=3.00, k=5.0;

//CALCULATIONS & OUTPUT
  
  cout <<" p-q*r = "<<p-q*r<< endl;
  cout <<"\n p/r = "<<p/r<< endl;
  cout <<"\n p%r = "<<p%r<< endl;
  cout <<"\n p/q/r = "<<p/q/r<< endl;
  cout <<"\n q+r%p = "<<q+r%p<< endl;
  cout <<"\n q*j/p = "<<q*j/p<< endl;
  cout <<"\n p/q/j = "<<p/q/j<< endl;
  cout <<"\n p/j/q = "<<p/j/q<< endl;
  cout <<"\n k/r/q = "<<k/r/q<< endl;
  cout <<"\n j/(-1*q) = "<<j/(-1*q)<< endl;
  cout <<"\n (p*r)*.5 = "<<(p*r)*.5<< endl;

  return 0;

}
