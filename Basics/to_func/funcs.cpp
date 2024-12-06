#include <iostream>

using namespace std;

// Two ways of writing a function in a single file which are to be used in the main function

// Prototyping a function: telling this function exists and is defined somewhere in this code
void some_void_func();

// Or else you define a function directly above the main function 
float some_float_func()
{
  return 3.14;
}

int main()
{
  some_void_func();
  
  float val = some_float_func();
  // the returned float value from the function is stored in here

  cout << val << " is the value returned from a fload type function";

  return 0;
}

// Actual function defined
void some_void_func()
{
  cout << "printing from a void type func" << endl;
}