#include <iostream>
#include <string>

using namespace std;

class Car{
  private:
    string mnf;
    string model;
    int year;

  public:
    // Constructor to initialize an object
    Car(string m, string mo, int y){
      mnf = m;
      model = mo;
      year = y;
    }

    void showDetails()
    {
      cout << "Car Manf: " << mnf << endl;
      cout << "Car Model: " << model << endl;
      cout << "Car Year: " << year << endl;
    }
};

int main()
{
  Car myCar("Dodge Challenger", "Hellcat", 2024);
  myCar.showDetails();
  return 0;
}