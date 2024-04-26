
  #include<iostream>
  #include"unorderedArrayListType.h"
  #include"arrayListType.h"
  using namespace std;

  int main()
  {
   unorderedArrayListType list(100);
   cout << list.maxListSize() <<endl;
//   list.removeAt(4);
   list.insertAt(0,1);
   list.insertAt(1,2);
   list.insertAt(2,3);
   list.insertAt(3,4);
   list.removeAt(2);


   return 0;
  }
