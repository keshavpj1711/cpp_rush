#include <iostream> 
#include <string>

using namespace std;

class ChillGuy{
  private:
    // It's a good practice to keep your class variables private
    string name;

  public:
    // But since we need to access the name we have to create fn for it
    void setName(string x)
    {
      name = x;
    }

    string getName()
    {
      return name;
    }
};

int main()
{
  ChillGuy student;
  student.setName("Keshav");
  cout << "Name of the student which is a Chill Guy: " << student.getName() << endl;
  return 0;
}