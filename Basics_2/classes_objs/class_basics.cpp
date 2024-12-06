#include <iostream> 

using namespace std;

class ChillGuy{
  public:
    void says()
    {
      cout << "Eat, Shit, Sleep, Repeat!!" << endl;
    }
};

int main()
{
  // Creating an object of class
  ChillGuy keshav;

  // calling the function of the object
  keshav.says();
  return 0;
}