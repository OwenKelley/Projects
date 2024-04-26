/*
  Owen Kelley
  1/25/2022
  1720 - 01
  home/students/okelley/csc1720/labs/lab3
  
  About: Class to count
*/
  class counterType
  {
   public:
/////////////////////////////////////////////////////////////////////////////////////////
    void initializeCounter();
/*
   initializeCounter sets the counter value to 0 
   precondition: runs when called, no input
   postcondition: sets counter value to 0
*/
/////////////////////////////////////////////////////////////////////////////////////////
    void setCounter(int = 0);
/*
   setCounter sets the counter to the given variable (if none, default 0)
   precondition: takes in specified value
   postcondition: sets values to 0 if value lower than 0 and sets counter to defined value
*/
/////////////////////////////////////////////////////////////////////////////////////////
    int getCounter() const;
/*
   getCounter returns the current counter value
   precondition: takes in current counter value
   postcondition: returns current counter value  
*/
/////////////////////////////////////////////////////////////////////////////////////////
    void incrementCounter();
/*
   incrementCounter increments counter by 1
   precondition: takes in current counter value
   postcondition: increases counter value by 1
*/
/////////////////////////////////////////////////////////////////////////////////////////
    void decrementCounter();
/*
   decrementCounter decreases counter by 1
   precondition: takes in current counter value
   postcondition: decreases counter value by 1
*/
/////////////////////////////////////////////////////////////////////////////////////////
    void displayCounter() const;
/*
   displayCounter outputs the current counter value
   precondition: takes in current counter value
   postcondition: outputs the counter value
*/
/////////////////////////////////////////////////////////////////////////////////////////
    counterType(int);
/*
   counterType checks to see if counter is a valid number
   precondition: takes in a defined value from main
   postcondition: sets values to 0 if value lower than 0 and sets counter to defined value
*/
/////////////////////////////////////////////////////////////////////////////////////////
    counterType();
/*
   counterType cleans the counter before program starts
   precondition: runs when program starts
   postcondition: sets counter to 0
*/
   private:

    int counter;
  };
