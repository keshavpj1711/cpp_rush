#include <iostream>

using namespace std;

void printArray(int array[], int sizeOfArray);
void printArray(float array[], int sizeOfArray);

int main()
{
  int arr1[5] = {2, 3, 1, 432, 21};
  float arr2[3] = {12.2, 3.14, 22.3};

  cout << "Array 1: \n";
  printArray(arr1, 5);
  cout << "Array 2: \n";
  printArray(arr2, 3);

  return 0;
}

void printArray(int array[], int sizeOfArray){
  for(int i = 0; i < sizeOfArray; i++){
    cout << i << " ----- " << array[i] << endl;
  }
}

void printArray(float array[], int sizeOfArray){
  for(int i = 0; i < sizeOfArray; i++){
    cout << i << " ----- " << array[i] << endl;
  }
}