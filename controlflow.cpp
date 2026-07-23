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
/*
2) Selection Statements (Conditionals)
These statements allow your code to make decisions and execute specific blocks depending on whether a condition is true or false.

These statements we already learned in Python and C Programming Language.

if statement: Executes a block of code only if its condition evaluates to true.

if-else statement: Provides an alternative block of code to run if the condition evaluates to false.

else if ladder: Evaluates multiple sequential conditions until one evaluates to true.

switch statement: Tests a single variable against multiple constant values (case), replacing long if-else ladders for multi-way branching.

Ternary operator (? :): Acts as a compact, inline single-line replacement for basic if-else assignments.

*/