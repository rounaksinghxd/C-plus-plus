//In this code we learn about Control Flow in C++
/*
Control flow in C++ refers to the order in which individual statements or instructions are executed within a program.
Control flow in C++ are catgorized into four types:
1) Sequential Flow: The default execution mechanism where every line of code runs exactly once in sequential order. 
*/
#include<iostream>
using namespace std;
int main()
{
    int x = 10;
    int y = 7;
    int sum = x+y; //Executes strictly after x and y are declared.
    cout << sum;
}