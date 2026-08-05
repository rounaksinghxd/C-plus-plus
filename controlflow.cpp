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
    cout << sum <<endl;

/*
2) Selection Statements (Conditionals)
These statements allow your code to make decisions and execute specific blocks depending on whether a condition is true or false.

These statements we already learned in Python and C Programming Language.

if statement: Executes a block of code only if its condition evaluates to true.

if-else statement: Provides an alternative block of code to run if the condition evaluates to false.

else if ladder: Evaluates multiple sequential conditions until one evaluates to true.

for: Executes a block of code a specified number of times, typically iterating over a range of values.

while: Executes a block of code as long as a specified condition is true.

do-while: Executes a block of code once and then repeats the execution as long as a specified condition is true.

break: Terminates the loop or switch statement and transfers control to the statement immediately following the loop or switch.

continue: Skips the current iteration of a loop and continues with the next iteration.

return: Exits a function and returns a value to the caller.

goto: Transfers control to a labeled statement within the same function. (Note: goto is generally discouraged due to its potential for creating unreadable and error-prone code.)

switch statement: Tests a single variable against multiple constant values (case), replacing long if-else ladders for multi-way branching.

Ternary operator (? :): Acts as a compact, inline single-line replacement for basic if-else assignments.
*/
// Example of if statement:
int a;
cout <<"Enter the value of a: ";
cin >> a;
if (a/2==0) {
    cout<<"The input number is: EVEN" <<endl;
  }  else {
        cout<<"The input number is: ODD" <<endl;
    }

//Example of else if statement:

int b;
cout <<"Enter your marks in C++:" <<endl;
cin >>b;
if (b>=90) {
    cout<<"Grade A" <<endl;
    }
    else if (b>=70) {
        cout<<"Grade B" <<endl;
    }
    else if (b>=40) {
        cout<<"Grade C" <<endl;
    }
    else {
        cout<<"Fail Try Next Time" <<endl;
    }

// Example of Switch Statement:
    int day = 4; // The variable to evaluate

    switch (day) { 
        /* The expression inside the parentheses is evaluated once and compared against each case value. 
    It must result in an integer, char, or enumeration type (floating-point numbers like float or double are not allowed).
    
        Each case represents a specific value to look for. 
        If it matches the expression, the code below it runs. Duplicate values are prohibited.
    
    */
        case 1: 
        
            cout << "Monday";
            break;
        case 2:
            cout << "Tuesday";
            break;
        case 3:
            cout << "Wednesday";
            break;
        case 4:
            cout << "Thursday"; // This block will execute
            break;
        case 5:
            cout << "Friday";
            break;
        case 6:
            cout << "Saturday";
            break;
        case 7:
            cout << "Sunday";
            break;
        default:
            cout << "Invalid day number!"; // Executes if no cases match
            break;
            /*
            default: An optional block that runs only if none of the explicit case values match the expression. 
            It acts exactly like the final else in an if-else chain.
            */
    }

    return 0;
}


