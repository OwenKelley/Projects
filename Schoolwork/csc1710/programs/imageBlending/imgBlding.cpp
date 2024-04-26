/*
   Owen Kelley
   csc1710-03
   Dr Wei
   Program 5 - Image Blending
*/

   #include<iostream>
   #include<iomanip>
   #include<string>
   #include<fstream>
   using namespace std;

//   ifstream inFile;
//   ofstream outFile;
/*
   struct imageType
   {
    string imageType;
    string comment;
    int width;
    int height;
    int max;
   };*/
/*
   struct pixel
   {
    short int red;
    short int green;
    short int blue;
//    int r;
//    int g;
//    int b;
//    int gray;
   };

   struct imageType
   {
    string type;
    string comment;
    int width, height, colormax;
    pixel image[800][800];
   };


//    picture.type
//    picutre.image
 
/////////////////////////////////////////////////////////////////
  
  int main(void)
  {
   ifstream inFile;
   ofstream outFile;

   imageType picture;
*/


//   pixel pixel;
/*
   string imageType, comment;
   int red, green, blue;
   int r;
   int g;
   int b;
   int gray;
   int width, height, max;
*/
/*
   //soldiers.ppm
   //USflag.ppm
   inFile.open("USflag.ppm");
   if(!inFile)
   {
    cout << "Cannot open the input file. Program will terminate." << endl;
    return 1;
   }
   outFile.open("newUSflag.ppm");
   //newSoldiers.ppm
   //newUSflag.ppm

   getline (inFile, picture.imageType);
   getline (inFile, picture.comment);
   inFile >> picture.width >> picture.height;
   inFile >> picture.colormax;

   outFile << "P2" << endl;
   outFile << picture.comment << endl;
   outFile << picture.width << " " << picture.height << endl;
   outFile << picture.colormax << endl;
//LOOPING
   for(int i=0 ; i < 800 ; i++)
   {
    for(int u=0 ; u < 800 ; u++)
    {
     image[i][u];
     inFile >> picture.image;
     inFile >> picture.image;
     inFile >> picture.image;

//     picture.gray = static_cast<int>(pixel.red * 0.3 + pixel.green * 0.6 + pixel.blue * 0.1);
//     outFile << pixel.red << pixel.green << pixel.blue << endl; 

    }
   }
//END CLOSE
   inFile.close();
   outFile.close();

   return 0;
  }
*/














/*
  short int red;
  short int green;
  short int blue;

  struct imageType
  {
   string type;
   string comment;
   int width, height, colormax;
   pixel image[800][800];
  }

  void loadimage(imageType& img)
  {
   if (inFile)
   {
    getline(inFile, type);
    getline(inFile, comment);
    inFile>>width>>height>>max;
   }
  }

  img.type = type;
  img.comment = comment;
  img.width = width


  for(int row=0 ; row<height ; row++)
  {
   for(int col=0 ; col<width; col++)
   {
    inFile>>r>>g>>b;
    (img.image[row][col]).red = r;
    (img.image[row][col]).green = g;
    (img.image[row][col]).blue = b;
   }
  }

  int rows = img1.height;
  int cols = img1.width;

  outFile<<"P6"<<endl;
  outFile<<img1.comment<<endl;
  outFile<<img1.width << " " << img1.height<<endl;
  outFile<<img1.colormax<<endl;

  for(int r=0 ; r<rows; r++)
  {
   for(int c=0 ; c<cols ; c++)
   {
    unsigned char red, green, blue;
    red = static_cast<unsigned char>(((image1.image[r][c]).red + (img2.image[r][c]).red)/2.0);
    green = static_cast<unsigned char>(((image1.image[r][c]).green + (img2.image[r][c]).green)/2.0);
    blue = static_cast<unsigned char>(((image1.image[r][c]).blue + (img2.image[r][c]).blue)/2.0);

    outFile<<red<<green<<blue;
   }
  }
  outFile.close();
// }
*/

/*
//int main()
  void main()
  {
   imageType img1, img2;

   loadimage(img1)
   loadimage(img2)

   outputimage("ASK USER TO ENTER FILE NAME AND INPUT IT HERE .ppm            EXAMPLE:("owen_ppm.ppm")", img1, img2);
  }
*/










/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

  struct pixel
  {
   short int red;
   short int green;
   short int blue;
  };

  struct imageType
  {
   string type;
   string comment;
   int width, height, colormax;
   pixel image[800][800];
  };
///////////////////////////////////////
  void loadimage (imageType& img)
  {
   ifstream inFile;
   int r, g, b, width, height, max;
   string type, comment, file;
   cout << "Enter image file name: ";
   cin >> file;
   inFile.open(file);
  
   if (inFile)
   {
    getline(inFile, type);
    getline(inFile, comment);
    inFile>>width>>height>>max;
   }

   img.type = type;
   img.comment = comment;
   img.width = width;
   img.height = height;
   img.colormax = max;

   for(int row=0 ; row<height ; row++)
   {
    for(int col=0 ; col<width; col++)
    {
     inFile>>r>>g>>b;
     (img.image[row][col]).red = r;
     (img.image[row][col]).green = g;
     (img.image[row][col]).blue = b;
    }
   }
   inFile.close();
   cout<<"Image finished loading"<<endl;
  } 


//string file should be the final file name
  void outputimage(string file, imageType& img1, imageType& img2)
  {
   double blend1;
   double blend2;
   ofstream outFile;
   outFile.open(file);
   int rows = img1.height;
   int cols = img1.width;
   unsigned char red, green, blue;

   outFile<<"P6"<<endl;
   outFile<<img1.comment<<endl;
   outFile<<img1.width<<" "<<img1.height<<endl;
   outFile<<img1.colormax<<endl;

   cout<<"What blend factor do you want? (1-100)"<<endl
       <<"Example: 5 = half and half"<<endl
       <<"8 = soldiers > USflag"<<endl;
   cin>>blend1;
   blend2 = 100 - blend1;
// 20 = 100 - 80
// 80 = 100 - 20
//   blend1 = blend1 * 0.01;
//   blend2 = blend2 * 0.01;
   for(int r=0 ; r<rows; r++)
   {
    for(int c=0 ; c<cols; c++)
    {
// unsigned
/*
     red = static_cast<unsigned char>(((blend1*(img1.image[r][c]).red) + (blend2*(img2.image[r][c].red)))/2.0);
     green = static_cast<unsigned char>(((blend1*(img1.image[r][c]).green) + (blend2*(img2.image[r][c].green)))/2.0);
     blue = static_cast<unsigned char>(((blend1*(img1.image[r][c]).blue) + (blend2*(img2.image[r][c].blue)))/2.0);
*/
//     red = static_cast<unsigned char>(((blend1*(img1.image[r][c]).red) + (blend2*(img2.image[r][c].red))));
//     green = static_cast<unsigned char>(((blend1*(img1.image[r][c]).green) + (blend2*(img2.image[r][c].green))));
//     blue = static_cast<unsigned char>(((blend1*(img1.image[r][c]).blue) + (blend2*(img2.image[r][c].blue))));
// P6 doesnt like spaces or endl

     red = static_cast<unsigned char>(((blend1*(img1.image[r][c]).red) + (blend2*(img2.image[r][c].red))) / 100.0);
     green = static_cast<unsigned char>(((blend1*(img1.image[r][c]).green) + (blend2*(img2.image[r][c].green))) / 100.0);
     blue = static_cast<unsigned char>(((blend1*(img1.image[r][c]).blue) + (blend2*(img2.image[r][c].blue))) / 100.0);

     outFile<<red<<green<<blue;
    }
   }  
   outFile.close();
  }
  //START int main() after this

// THE P6 file should have legible width height and max at the top under the comment
// void??????
  int main()
  {
   imageType img1, img2;
   string finalFile;
   loadimage(img1);
   loadimage(img2);

   cout<<"What would you like to name the final file? (example.ppm)"<<endl;
   cin>>finalFile;

//"ASK USER TO ENTER FILE NAME AND INPUT IT HERE .ppm            EXAMPLE:("owen_ppm.ppm")
   outputimage(finalFile, img1, img2);

   return 0;
  }























