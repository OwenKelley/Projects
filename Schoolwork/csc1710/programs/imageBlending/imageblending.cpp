
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
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
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
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
   void outputImage (string file, imageType& image1, imageType& image2);
   void loadImage (imageType& image);
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
   int main()
   {
    imageType image1, image2;
    string finalFile;
    loadImage(image1);
    loadImage(image2);

// Take in final file name
    cout<<"What would you like to name the final file? (example.ppm)"<<endl;
    cin>>finalFile;

// Create final image
    outputImage(finalFile, image1, image2);

    return 0; 
   }
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
   void outputImage(string file, imageType& image1, imageType& image2)
   {
    double blend1;
    double blend2;
    ofstream outFile;
    outFile.open(file);
    int rows = image1.height;
    int cols = image1.width;
    unsigned char red, green, blue;

// Output file header
    outFile<<"P6"<<endl;
    outFile<<image1.comment<<endl;
    outFile<<image1.width<<" "<<image1.height<<endl;
    outFile<<image1.colormax<<endl;

// Take in a blend percentage
    cout<<"What blend percentage do you want? (1-100)"<<endl
        <<"Type 50 for a 50/50 split"<<endl;
    cin>>blend1;
    blend2 = 100 - blend1;

    for(int r=0 ; r<rows; r++)
    {
     for(int c=0 ; c<cols; c++)
     {
  // Add image 1 and 2, multiply by a blend factor, then divide by 100 to average the colors
      red = static_cast<unsigned char>(((blend1*(image1.image[r][c]).red) + (blend2*(image2.image[r][c].red))) / 100.0);
      green = static_cast<unsigned char>(((blend1*(image1.image[r][c]).green) + (blend2*(image2.image[r][c].green))) / 100.0);
      blue = static_cast<unsigned char>(((blend1*(image1.image[r][c]).blue) + (blend2*(image2.image[r][c].blue))) / 100.0);

      outFile<<red<<green<<blue;
     }
    }
    outFile.close();
   }
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
   void loadImage(imageType& image)
   {
    ifstream inFile;
    int r, g, b, width, height, max;
    string type, comment, file;
    cout << "Enter image file name: ";
    cin >> file;
    inFile.open(file);

// Read in the "header" if the file is read
    if (inFile)
    {
     getline(inFile, type);
     getline(inFile, comment);
     inFile>>width>>height>>max;
    }

// Assign header values to struct
    image.type = type;
    image.comment = comment;
    image.width = width;
    image.height = height;
    image.colormax = max;

// Read in RGB values from image
    for(int row=0 ; row<height ; row++)
    {
     for(int col=0 ; col<width; col++)
     {
      inFile>>r>>g>>b;
      (image.image[row][col]).red = r;
      (image.image[row][col]).green = g;
      (image.image[row][col]).blue = b;
     }
    }
    inFile.close();
//  cout<<"Image finished loading"<<endl;
   }
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


