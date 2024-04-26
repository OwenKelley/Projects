/*eat ass*/



#include<iostream>
#include<iomanip>
#include <string>
using namespace std;

int main(void)
{
   string thumb;
   cin >> thumb;
   bool fuk;
if(thumb=="left")
{
   fuk=true;
}

if(fuk)
{
   //for loop basic structure is for( int i = ?; i<?; i++)
    for(int p=10; p>0;p= p-2)
    {
    
       cout << "You are sexy"<< p<< endl;
    }
}
else if(thumb=="right")
{
   int x=0;
   while(x<3)
   {
   cout << "You think" << endl;
   x++;
   }
}
else
{
   cout << "You think you are sexy" << endl;
}


/*char x = 'a';

switch(x){

case 'b':
cout << 3;
break;

case 'a':
cout << 2;
break;

case 'c':

break;

case 'd':

break;

case 5:

break;
}

*/

}
  return 0;

}
