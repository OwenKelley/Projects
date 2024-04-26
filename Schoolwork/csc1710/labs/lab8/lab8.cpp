/* 
   Owen Kelley
   csc1710-03
   Dr Wei
   LAB 8 - Picture conversion
*/

   #include<iostream>
   #include<iomanip>
   #include<string>
   #include<fstream>
   using namespace std;

   int main(void)
  {
   ifstream inFile;
   ofstream outFile;

   string imageType, comment;
   int red, green, blue;
   int r;
   int g;
   int b;
   int gray;
   int width, height, max;


   inFile.open("beach.ppm");
   if(!inFile)
   {
    cout << "Cannot open the input file. Program will terminate." << endl;
    return 1;
   }
   outFile.open("BWbeach.ppm");
 
   getline (inFile, imageType);
   getline (inFile, comment);
   inFile >> width >> height;
   inFile >> max;
  
   outFile << "P2" << endl;
   outFile << comment << endl;
   outFile << width << " " << height << endl;
   outFile << max << endl;
//LOOPING
   while(!inFile.eof())
   {
    inFile >> red;
    inFile >> green;
    inFile >> blue;

    gray = static_cast<int>(red * 0.3 + green * 0.6 + blue * 0.1);
    outFile << gray << endl;
   }
//END CLOSE
   inFile.close();
   outFile.close();

   return 0;
  }


