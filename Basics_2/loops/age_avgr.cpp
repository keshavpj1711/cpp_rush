#include <iostream> 

using namespace std;

// We want to take the inputs as long as someone enters -1 which is when we terminate our loop
int main()
{
  int age = 0;
  int total = 0;
  float counter = 0;

  while(age>=0) {
    cin >> age;
    if (age >= 0) {
      total += age;
      counter++;
    }
  }

  cout << "Average age: " << (total/counter) << endl;

  return 0;
}