


   #include <stdio.h>

   int main(int argc, char **argv) 
   {
    // Initialize a four-byte integer with easily-distinguishable byte values
    //int value = 0xAABBCCDD;
     float value=0;
     fprintf("Enter a Float:  ");
     scanf("%f", &value);
    // Initialize a character pointer to the address of the integer.
    char *p = (char *) &value;

    for (int i = 0; i < sizeof(value); i++) 
    {
     fprintf(stdout, "Address: %p, Value: %02hhX\n", p, *p);
     p -= 1;
    }
    // For each byte in the integer, print its memory address and value.
/*
    for (int i = 0; i < sizeof(value); i++) 
    {
     fprintf(stdout, "Address: %p, Value: %02hhX\n", p, *p);
     p += 1;
    }
*/
    return 0;
   }
 
