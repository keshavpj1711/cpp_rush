#include <iostream>

using namespace std;

int main() {
  int count = 1;

  // The 'do-while' loop guarantees that the loop will run at least once
  // This is because the condition is checked after the code inside the loop executes.
  do {
    cout << "Iteration " << count << endl; 
    count++;  
  }while (count <= 5);  // Continue the loop as long as count is less than or equal to 5

  return 0;
}