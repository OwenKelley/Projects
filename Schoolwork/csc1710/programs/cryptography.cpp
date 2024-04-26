/*
   Owen Kelley
   csc1710-03
   Dr Wei
   Program - Caesar Cipher
*/

   #include<string>
   #include<iostream>
   #include<fstream>
   #include<iomanip>
   #include<cmath>
   #include<string.h>
   using namespace std;
/////////////////////////////////////////////////////////////////////////
  void encryption(char msg[], char msgE[], int length, int key);
  void decryption(char msg[], char msgE[], int length, int key);
  void printArray(char x[], int length);
  void clean(char msg[], char msgE[], int length);
//////////////////////////////////////////////////////////////////////
  int main()
  {
   char msg[100];
   char msgE[100];
   clean(msg, msgE, 100);
   int key = 0;
   int dkey = 0;
   cout<<"INPUT PLAINTEXT"<<endl;
   cin.getline(msg, 100); //100

   int length = strlen(msg);
   cout<<length<<endl;

   printArray(msg, length);
  
   while(key == 0)
   {
    cout<<"INPUT KEY"<<endl;
    cin>>key; 
   }
   if(key > 26)
   {
    while(key > 26)
    {
     key = key - 26;
    }
   }
   if(key < 0)
   {
    while(key < 0)
    {
     key = key + 26;
    }
   }

   encryption(msg, msgE, length, key);
   
   printArray(msgE, length);

   cout<<"Enter decryption key"<<endl;
   cin>>dkey;
   if(dkey > 26)
   {
    while(dkey > 26)
    {
     dkey = dkey - 26;
    }
   }
   if(dkey < 0)
   {
    while(dkey < 0)
    {
     dkey = dkey + 26;
    }
   }
   if(key == dkey)
   {
    decryption(msg, msgE, length, key);
    printArray(msgE, length);
   }

   return 0;
  }
////////////////////////////////////////////////////////////////////////
  void printArray(char x[], int length)
  {
   for(int i = 0 ; i < length ; i++)
   {
    cout<<x[i];
   }
   cout<<endl;
  }
//////////////////////////////////////////////////////////////////////////
  void encryption(char msg[], char msgE[], int length, int key)
  {
   int ch_int;
   for (int i=0; i<length; i++)
   {
      char ch = msg[i];
      // lowercase encription
      if(ch != ' ')
      {
       if (ch>='a' && ch<='z')
       {
         ch_int = static_cast<int>(ch);
         ch_int = ch_int + key;

         if (ch_int>static_cast<int>('z'))
            ch_int = ch_int - static_cast<int>('z') + static_cast<int>('a') -1;
       }
       else if (ch>='A' && ch<='Z')
       {
         ch_int = static_cast<int>(ch);
         ch_int = ch_int + key;
         if (ch_int>static_cast<int>('Z'))
            ch_int = ch_int - static_cast<int>('Z') + static_cast<int>('A') -1;
       }
      }
      else
      {
       ch_int = ' ';
      }
      if(ch == '!')
      {
       ch_int = '!';
      }
      else if(ch == '?')
      {
       ch_int = '?';
      }
      else if(ch == '.')
      {
       ch_int = '.';
      }
      else if(ch == '$')
      {
       ch_int = '$';
      }
      else if(ch == ',')
      {
       ch_int = ',';
      }
      msgE[i] = static_cast<char>(ch_int);
   }
  }
////////////////////////////////////////////////////////////////////////////////////
  void decryption(char msg[], char msgE[], int length, int key)
  {
   for (int i = 0 ; i < length ; i++)
   {
    msgE[i] = msg[i];
   }
  }
/////////////////////////////////////////////////////////////////////////////////////////
   void clean(char msg[], char msgE[], int length)
   {
    for(int i = 0 ; i < length ; i++)
    {
     msg[i] = 0; 
     msgE[i] = 0;
    }
   }

