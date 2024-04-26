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
   using namespace std;

///////////////////////////////////////////////////////////////////////////////////
//   void getData(string file, string names[], int scores[][5], int numStudents);
//   void encrypt(string plaintext);
   void letters(char alphabet[25]);
   void encrypt(int num[], int key, char ciphertext[]);
   void plaintext(char plaintext[]);
   void letter2num(char txt[], char alphabet[], int num[], int itxt[]);
   void num2letter(char txt[], char alphabet[], int num[]);
   void decrypt(int num[], int key, char finplaintxt[]);
   void cleaner(int num[], char plaintext[], char ciphertext[], char finplaintxt[]);
//   void encrypt(int num[], int key, char ciphertext[]);
   void encrypt(int num[], int key, char ciphertext[], char alphabet[], int itxt[]);
   void lletters(char lalphabet[]);
   void encryption(char msg[], char msgE[], int length, int key);

   int main()
   {
    int x=15;
    int length = 15;
    char plaintext[x];
    char ciphertext[x];
    char finplaintxt[x];
    int num[x];
    int itxt[x];
    char lalphabet[25];
/*    for (int i=0 ; i < x ; i++)
    {
     ciphertext[i] = 0;
    }*/
//    cleaner(num, plaintext, ciphertext, finplaintxt);
    int key;
    char alphabet[25];
//    letters(alphabet);
//    cout << alphabet[6] <<endl<< alphabet[12] <<endl;
    cout <<"Please enter your message."<<endl;
//    void plaintext(char plaintext[]); 
    cin.get(plaintext, 15);
    for (int i=0 ; i < 15 ; i++)
    {
     cout<<plaintext[i];
    }
    cout<<endl;

    cout <<"Please enter your key as a number between 1-25"<<endl;
    cin>>key;

    encryption(plaintext, ciphertext, length, key);

    return 0;
   }
//    string names[10];
//    int scores[10][5];

/*    string fileName;
    cout <<"enter data file name"<< endl;
    cin >> fileName;

  getData(fileName, names, scores, 10);

    return 0;
   }
/////////////////////////////////////////////////////////////////////////////////////
   void getData(string file, string names[], int scores[][5], int numStudents)
   {
    ifstream inFile;
    inFile.open(file);

    for(int s = 0 ; s < numStudents ; s++)
    {
     inFile >> names[s];
     //read in 5 test scores
     for(int t=0 ; t < 5 ; t++)
     {
      inFile >> scores[s][t];
     }
    }
    inFile.close();
   }
*/
///////////////////////////////////////////////////////////////////////////////////////////
//   void encrypt(plaintext)
//   {
//    x = 5;
//   }
////////////////////////////////////////////////////////////////////////////////////////
/*
   void letters(char alphabet[25])
   {
    char a, b, c, d, e, f, g, h, i, j, k, l, m, n, o, p, q, r, s, t, u, v, w, x, y, z;
    alphabet[0] = 'a';
    alphabet[1] = 'b';
    alphabet[2] = 'c';
    alphabet[3] = 'd';
    alphabet[4] = 'e';
    alphabet[5] = 'f';
    alphabet[6] = 'g';
    alphabet[7] = 'h';
    alphabet[8] = 'i';
    alphabet[9] = 'j';
    alphabet[10] = 'k';
    alphabet[11] = 'l';
    alphabet[12] = 'm';
    alphabet[13] = 'n';
    alphabet[14] = 'o';
    alphabet[15] = 'p';
    alphabet[16] = 'q';
    alphabet[17] = 'r';
    alphabet[18] = 's';
    alphabet[19] = 't';
    alphabet[20] = 'u';
    alphabet[21] = 'v';
    alphabet[22] = 'w';
    alphabet[23] = 'x';
    alphabet[24] = 'y';
    alphabet[25] = 'z';
   }
//////////////////////////////////////////////////////////////////////////////////////////
   void lletters(char lalphabet[25])
   {
//    char a, b, c, d, e, f, g, h, i, j, k, l, m, n, o, p, q, r, s, t, u, v, w, x, y, z;
    lalphabet[0] = 0;
    lalphabet[1] = 1;
    lalphabet[2] = 2;
    lalphabet[3] = 3;
    lalphabet[4] = 4;
    lalphabet[5] = 5;
    lalphabet[6] = 6;
    lalphabet[7] = 7;
    lalphabet[8] = 8;
    lalphabet[9] = 9;
    lalphabet[10] = 10;
    lalphabet[11] = 11;
    lalphabet[12] = 12;
    lalphabet[13] = 13;
    lalphabet[14] = 14;
    lalphabet[15] = 15;
    lalphabet[16] = 16;
    lalphabet[17] = 17;
    lalphabet[18] = 18;
    lalphabet[19] = 19;
    lalphabet[20] = 20;
    lalphabet[21] = 21;
    lalphabet[22] = 22;
    lalphabet[23] = 23;
    lalphabet[24] = 24;
    lalphabet[25] = 25;
   }
//////////////////////////////////////////////////////////////////////////////////////////
   void encrypt(int num[], int key, char ciphertext[], char alphabet[], int itxt[])
   {

    for(int i=0 ; i < 15 ; i++)
    {
     if(num[i] == -1)
     {
      num[i] = -1;
     }
     else
     {
//      num2letter(ciphertext, alphabet, num);
      ciphertext[i] = num[i] + key;
      num2letter(ciphertext, alphabet, num);
     } 
    }
    for(int i=0 ; i < 15 ; i++)
    {
     cout<<ciphertext[i];
    }
    cout<<endl;
*/
/*    for(int i=0 ; i < 15 ; i++)
    {
     itxt[i] = itxt[i] + key;
    }
    for(int i=0 ; i < 15 ; i++)
    {
     cout<<itxt[i]<<endl;
    }
   }
////////////////////////////////////////////////////////////////////////////////////////
   void decrypt(int num[], int key, char finplaintxt[])
   {
    for(int i=0 ; i < 15 ; i++)
    {
     if(num[i] == ' ')
     {
      num[i] = ' ';
     }
     else
     {
      finplaintxt[i] = num[i] - key;
     }
//     finplaintxt[i] = num[i - key];
    }
    for(int i=0 ; i < 15 ; i++)
    {
     cout<<finplaintxt[i];
    }
    cout<<endl;
   }
*/
/////////////////////////////////////////////////////////////////////////////////////////////
   void plaintext(char plaintext[])
   {
    cout <<"Please enter your message."<<endl;
    cin>>plaintext[15];
    cin.get(plaintext, 15);
    for (int i=0 ; i < 15 ; i++)
    {
     cout<<plaintext[i]<<endl;
    }
   }
/*
////////////////////////////////////////////////////////////////////////////////////////////
   void letter2num(char txt[], char alphabet[], int num[], int itxt[])
   {
    for(int i=0 ; i < 15 ; i++)
    {
     for(int j=0 ; j < 25 ; j++)
     {
      if(txt[i] == ' ')
      {
       txt[i] = ' ';
      }
      else if(txt[i] == alphabet[j])
      {
       num[i] = j;
       cout << j << endl;
       itxt[i] = j;
      }
     }
    }
   }
/////////////////////////////////////////////////////////////////////////////////////////
   void num2letter(char txt[], char alphabet[], int num[])
   {
    for(int i=0 ; i < 15 ; i++)
    {
     for(int j=0 ; j < 25 ; j++)
     {
      if(num[i] == -1)
      {
       txt[i] = ' ';
      }
      else if(j == num[i])
      {
       txt[i] == num[i];
       cout << txt[i] << endl;
      }
     }
    }
   }
/////////////////////////////////////////////////////////////////////////////////////////
   void cleaner(int num[], char plaintext[], char ciphertext[], char finplaintxt[])
   {
    for(int i = 0 ; i < 15 ; i++)
    {
     num[i] = -1;
     plaintext[i] = ' ';
     ciphertext[i] = ' ';
     finplaintxt[i] = ' ';
    }
   }
*/
////////////////////////////////////////////////////////////////////////////////////////
//////////
///////////
/////////
void encryption(char msg[], char msgE[], int length, int key)
{
   int ch_int;
   for (int i=0; i<length; i++)
   {
      char ch = msg[i];
      // lowercase encription
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
      msgE[i] = static_cast<char>(ch_int);
   }
}


































