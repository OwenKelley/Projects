/*
TEST:
get
ignore
peek
putback
*/

#include<iostream>
using namespace std;


int main(void)
{
  int userint;
  char char1;
  char userchar1;

//USER INPUT
  cout << "Type abc" << endl;
  cin >> userint;
//CIN STATEMENT
  cin.get(char1) >> userint;

//OUTPUT
  cout<<char1<<endl;

  return 0;

}
