/**/
  #include<iomanip>
  #include<iostream>
  using namespace std;
 
  int main()
  {
// F(a,b,c) = b & (~a | c)
// G(a,b,c) = a & b & c | ~a & b & ~c
   bool a, b, c, F, G;

   cout<<"  a   b   c   F   G"<<endl
       <<"  -----------------"<<endl;
   for(int i = 0 ; i < 8 ; i++)
   {
    for(int j = 0 ; j < 5 ; j++)
    {
     if(i<4)
     {
      a = 1;
     }
     else
     {
      a = 0;
     }
///////////////
     if(i == 0 || i==1 || i==4 || i==5)
     {
      b = 1;
     }
     else
     {
      b = 0;
     }
///////////////
     if(i == 0 || i == 2 || i == 4 || i == 6)
     {
      c = 1;
     }
     else
     {
      c = 0;
     }
/*
   111
   110
   101
   100 
   011
   010
   001
   000
*/
 
     F = b & (!a | c);
     G = (a & b & c) | (!a & b & c) | (!a & b & !c);
    }
    cout <<"  "<<a<<"   "<<b<<"   "<<c<<"   "<<F<<"   "<<G<<endl;
   }
  } 
