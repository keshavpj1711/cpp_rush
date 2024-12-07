#include <iostream>

using namespace std;

void print_number(int x){
  cout << "Printing an integer: " << x << endl;
}

void print_number(float x){
  cout << "Printing a float : " << x << endl;
}

// Function overloading: define multiple functions with the same name, 
// but with different parameter types or numbers of parameters. 
// The compiler determines which function to call based on the function signature at compile-time. 

int main()
{
  int a = 12;
  float b = 15.23;

  print_number(a);
  print_number(b);

  return 0;
}