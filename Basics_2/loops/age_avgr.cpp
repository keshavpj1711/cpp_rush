#include <iostream> 

using namespace std;

// We want to take the inputs as long as someone enters -1 which is when we terminate our loop
int main()
{
  int age;
  int total = 0;
  float counter = 0;

  cin >> age;

  while(age!=-1) {
    total += age;
    counter++;
    cin >> age;
  }

  cout << "Average age: " << (total/counter) << endl;

  return 0;
}