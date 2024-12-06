#include <iostream>
#include <typeinfo>

using namespace std;

int main() {
    // Integer variable: stores whole numbers
    int myInt = 10;
    cout << "Integer: " << myInt << endl;
    cout << "Type of myInt: " << typeid(myInt).name() << endl;

    // Floating-point variable: stores numbers with decimal points, but less precision than double
    float myFloat = 10.5;
    cout << "Float: " << myFloat << endl;
    cout << "Type of myFloat: " << typeid(myFloat).name() << endl;

    // Double precision floating-point variable: stores numbers with decimal points, with more precision than float
    double myDouble = 20.123456;
    cout << "Double: " << myDouble << endl;
    cout << "Type of myDouble: " << typeid(myDouble).name() << endl;

    // Character variable: stores a single character
    char myChar = 'A';
    cout << "Character: " << myChar << endl;
    cout << "Type of myChar: " << typeid(myChar).name() << endl;

    // Boolean variable: stores true or false values
    bool myBool = true;
    cout << "Boolean: " << myBool << endl;
    cout << "Type of myBool: " << typeid(myBool).name() << endl;

    // String variable: stores a sequence of characters (text string)
    string myString = "Hello, C++!";
    cout << "String: " << myString << endl;
    cout << "Type of myString: " << typeid(myString).name() << endl;

    // Constant integer variable: stores a number that cannot be modified after initialization
    const int myConst = 100;
    cout << "Constant Integer: " << myConst << endl;

    // Pointer variable: stores the memory address of another variable
    int *ptr = &myInt;
    cout << "Pointer: " << ptr << endl;
    cout << "Value pointed to by ptr: " << *ptr << endl;
    cout << "Type of ptr: " << typeid(ptr).name() << endl;

    // Reference variable: an alias for another variable, changes to ref also change myInt
    int &ref = myInt;
    ref = 20;  // Changing ref will also change myInt
    cout << "Reference: " << ref << endl;
    cout << "Original myInt after reference modification: " << myInt << endl;

    // Short integer variable: stores smaller integers with reduced range
    short int shortVar = 32767;
    cout << "Short Integer: " << shortVar << endl;

    // Long integer variable: stores larger integers with increased range
    long int longVar = 1234567890;
    cout << "Long Integer: " << longVar << endl;

    // Displaying size of each variable type in bytes
    cout << "Size of int: " << sizeof(myInt) << " bytes" << endl;
    cout << "Size of float: " << sizeof(myFloat) << " bytes" << endl;
    cout << "Size of double: " << sizeof(myDouble) << " bytes" << endl;
    cout << "Size of char: " << sizeof(myChar) << " bytes" << endl;
    cout << "Size of string: " << sizeof(myString) << " bytes" << endl;

    return 0;
}
