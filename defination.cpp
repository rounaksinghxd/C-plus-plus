//In this file we learn about all data types and vairables in C++
/*
Data types in C++: 1) Basic Data Type 2) Derived Data Type 3) User Defined Data Types
//Basic Data Types:
int = 4 bytes = Store whole number without decimals
char = 1 byte = Store a single character inside single quotes
bool = 1 byte = Stores logical value true (1) or false (0)
float = 4 bytes = Stores fractional numbers
dounle = 8 bytes = Stores precise fractional numbers.
void = 0 bytes = Represents the absence of a value; used for function return types.

//Derived Data Types:
Arrays: A collection of elements of the same type stored in continuous memory.
Pointers: Variables that explicitly store the memory addresses of other variables.
References: An alias or alternative name given to an already existing variable.
Functions: Code blocks with specific return types and inputs, grouped as a distinct type

//User - Defined Data Types:
Structures (struct): Groups multiple related variables of different types under a single name.
Classes (class): The foundation of Object-Oriented Programming (OOP) that binds data and functions together.
Unions (union): Allows multiple member variables to share the exact same memory location to save space.
Enumerations (enum): Defines custom sets of named integer constants.

*/
#include<iostream>
using namespace std;
int main()
{
    int a = 10;
    char ab = 'Z';
    bool abc = true;
    float f = 3.14;
    double ntr = 7.631118418;
    int arr[5] = {1,2,3,4,5};
    cout << a << ab << abc << f << ntr;
    return 0;
}