# Object-Oriented Programming in C++

A collection of concise, self-contained C++ programs that demonstrate the core concepts of object-oriented programming. Each file focuses on a single principle, making the set useful as a study reference or teaching aid.

## Overview

Every program is a standalone `.cpp` file with its own `main` function. The examples progress from basic classes and objects through inheritance, overloading, and polymorphism, showing one concept at a time with clear output.

## Programs

| File | Concept | Description |
| --- | --- | --- |
| program1.cpp | Classes and Objects | Defines a `Student` class and accesses its members through an object |
| program2.cpp | Constructor and Destructor | Shows object lifecycle with a parameterized constructor and a destructor |
| program3.cpp | Single Inheritance | A `Dog` class inherits behavior from an `Animal` base class |
| program4.cpp | Multilevel Inheritance | A `Puppy` class inherits through `Dog` from `Animal` |
| program5.cpp | Function Overloading | Overloads a `show` method for int, double, and string arguments |
| program6.cpp | Runtime Polymorphism | Uses a virtual function and a base pointer to call the derived method |
| program7.cpp | Function Overloading | Further overloading example resolving calls by argument type |

## Requirements

- A C++ compiler such as g++ (GCC) or any compiler supporting C++11 or later

## Build and Run

Compile and run any program from the terminal:

```bash
g++ program1.cpp -o program1
./program1
```

On Windows, run the generated executable with `program1.exe`.

## Sample Output

```
program2.cpp
Constructor called
Name: Ravi, Age: 25
Destructor called for Ravi
```

## Author

Created by [Kumar44developer](https://github.com/Kumar44developer).
