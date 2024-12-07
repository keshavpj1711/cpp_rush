#include <iostream> 

using namespace std;

int main()
{
  int i = 0;

  while (i<=5) {
    cout << "Printing from while loop" << endl;
    i++;
  }

  for (int j = 0; j<=3; j++) {
    cout << "Printing from for loop" << endl;
  }
  // Prints 4 times since j = 0, 1, 2 and 3 

  return 0;
}
