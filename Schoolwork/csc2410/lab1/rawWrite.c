/*
   Name: R. Shore
   Date: 1-30-2020
   Class: CSC-4210
   Location: ~/csc2410/examples

   The main purpose of this code is to demonstrate 
      * pointers and dynamically using memory
      * working with integers in a human readable form
      * working with integers as they are stored in two's complement form in
        menory in little endian form.
      * writing to a file the integers in two's complement form and again 
        observing that the integers are stored in little endian form.
   The program 
      * reads in an array of integers from a file named "intData".  Integers are store in normal readable form.
      * writes the integers to a file "intRaw" in two's complement form - little endian
      * reads the rawInt file to load the ints into a new dynamic array.
      * displays the ints on the screen to verify the process.
      *
   To compile
      gcc -Wall -o rawWrite rawWrite.c  (note - include the -g switch if you want to use gdb - debugger)
   To start the debugger when you use the -g switch
      gdb rawWrite
   To execute
      rawWrtie
   The execution produces a file name rawInt which can be inspected with hexdum -C intRaw

*/
#include<stdio.h>
#include<stdlib.h>

void loadFromFile(int **, int );
void loadRawFromFile(int **, int );
void dumpToDisplay(int *, int );
void dumpRawToFile(int *, int );

int main()
{
   int n=10;

   int *xptr;
   int *yptr;

   loadFromFile(&xptr,n);
   dumpRawToFile(xptr,n);

   loadRawFromFile(&yptr,n);
   dumpToDisplay(yptr,n);
   return 0; 
    
}

/*
   loadRawFromFile

   General Comment about the function:
   precondition:

   postcondition:
   
*/
void loadRawFromFile(int **yptr, int n)
{
   FILE *infile;

   infile=fopen("intRaw","r");
   //if fopen fails, infile will be NULL.  See man fopen return value
   if(!infile) {
      fprintf(stderr,"Error: opening intData for read access failed\n");
      exit(1); 
   }

   *yptr = (int *)malloc(n*sizeof(int));
   fread((void *)*yptr, sizeof(int),n,infile);
   fclose(infile);
}

/*
   loadFromFile

   General Comment about the function:
   precondition:

   postcondition:
   
*/

void loadFromFile(int **xptr, int n)
{
   FILE *infile;
   int i;

   infile = fopen("intData","r");
   //if fopen fails, infile will be NULL.  See man fopen return value
   if(!infile) {
      fprintf(stderr,"Error: opening intData for read access failed\n");
      exit(1); 
   }

   //load the 
   *xptr = (int *)malloc(n*sizeof(int));
   for(i=0;i<n;i++)
      fscanf(infile, "%d",*xptr+i);
   fclose(infile);
}

/*
   dumpToDisplay

   General Comment about the function:
   precondition:

   postcondition:
   
*/

void dumpToDisplay(int *xptr, int n)
{
   int i;

   //output to the display
   for(i=0;i<n;i++)
      fprintf(stdout,"%d\n",*(xptr+i));
}

/*
   dumpRawToFile

   General Comment about the function:
   precondition:

   postcondition:
   
*/
void dumpRawToFile(int *xptr, int n) 
{
   FILE *outfile;

   outfile=fopen("intRaw","w");
   //if fopen fails, infile will be NULL.  See man fopen return value
   if(!outfile) {
      fprintf(stderr,"Error: opening intRaw for write access failed\n");
      exit(1); 
   }
   fwrite((void *)xptr, sizeof(int),n,outfile);
   fclose(outfile);
}
