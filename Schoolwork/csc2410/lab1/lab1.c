/*
1. Program name: <lab1.c>
2. Author:       <Owen Kelley>
3. Class:        <CSC-2410>
4. Date:         <8/24/2023>
5. Location:     <~/csc2410/lab1/lab1.c>
6. This program takes in between 2 and 10 numbers from the command line and calculates the average of those numbers
7. 
8.
9.   Compiling: gcc lab1.c -o lab1
10.  Executing: ./lab1 <enter numbers here>
*/  
  #include <stdlib.h>
  #include <stdio.h>
////////////////////////////////////////////////
  int main(int argc, char *argv[])
  {
   double avg=0;
//   double x=0;

   if(argc>2)
   {
    if(argc>11)
    {
     fprintf(stderr, "\n  Error: Too many real numbers provided \n \n");
     return 0;
    }
    for(int i=1 ; i<argc ; i++)
    {
     avg=avg+atof(argv[i]);
    } 
    avg=avg/(argc-1);
   }
   else
   {
    fprintf(stderr, "\n  Error: Too few real numbers provided \n \n");
    return 1;
   }

   printf("\n  The average of %d real numbers: %.2f \n \n", (argc-1), avg);

   return 2;
  }
