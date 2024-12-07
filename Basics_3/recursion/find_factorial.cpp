#include <iostream>

using namespace std;

int get_factorial(int a);

int main()
{
  int num;

  cout << "Enter a number whose factorial is to be found: ";
  cin >> num;

  cout << "Factorial of " << num << " = " << get_factorial(num) << endl;
}

int get_factorial(int a){
  // Defining base case
  if (a==0) {
    return 1;
  }else {
  return a*get_factorial(a-1);
  }
}