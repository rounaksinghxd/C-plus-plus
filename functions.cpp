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
// function defination
/*void greet() {
    cout <<"Hello Rounak"<<endl;
}
int main() {
    greet(); // this line of code used to call the function.
    greet(); // we can print multiple times this using only by calling the function multiple times.
    return 0;
}
    */
// Now let's say we want a return value from function so in that case we have to void function to int function.
int greets() {
    cout <<"Hello World" <<endl;
    return 100;
}
int main() {
    int value = greets();
    cout<<"Value is: "<<value <<endl ;
    return 0;
}





