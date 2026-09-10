// In this repo we learn about Functions in C++
/*
Functions is a: Reusable blocks of code that perform a specific task. 
They help break down large programs into smaller, manageable pieces, preventing you from writing the same code multiple times.

// Difference between Void and int Functions:
void Functions: Return no value at all.
int Functions: Return some value exactly (one integer).
*/
#include <iostream>
using namespace std;
void greet() {
    cout <<"Hello Rounak"<<endl;
}
int main() {
    greet(); // this line of code used to call the function.
    greet(); // we can print multiple times this using only call in functions.
    return 0;
}
