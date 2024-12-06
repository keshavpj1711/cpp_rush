# Setup with Separate Class Files

How to organize a C++ project by splitting class declaration and definition into separate files

## 1. Folder Structure

Let say we create a folder str like this:
```
my_project/
│
├── src/
│   ├── main.cpp
│   ├── MyClass.cpp
│
└── include/
    └── MyClass.h

```

## 2. Define the Class in a Header File (`MyClass.h`)

```cpp
// MyClass.h
#ifndef MYCLASS_H
#define MYCLASS_H

class MyClass {
public:
    MyClass();          // Constructor
    void greet();       // Member function

private:
    int number;
};

#endif
```

`#ifndef MYCLASS_H` and `#define MYCLASS_H` prevent multiple inclusions of the header.

## 3. Define Class Methods in Source file (`MyClass.cpp`)

```cpp
// MyClass.cpp
#include "MyClass.h"
#include <iostream>

MyClass::MyClass() : number(0) {}  // Constructor implementation

void MyClass::greet() {
    std::cout << "Hello from MyClass! Number: " << number << std::endl;
}
```

## 4. Write in the main function (`main.cpp`)

```cpp
// main.cpp
#include <iostream>
#include "MyClass.h"

int main() {
    MyClass myObject;  // Create an object of MyClass
    myObject.greet();   // Call the greet method
    return 0;
}

```