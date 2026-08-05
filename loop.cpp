// In this file we learn about loops in C++
/*
Loops in C++ are control structures used to repeatedly execute a block of code as long as a specified condition remains true. 
C++ supports four primary types of loops: for, while, do-while, and range-based for loops.
*/

//for loop: The for loop is an entry-controlled loop best used when you know exactly how many times you want to run a block of code ahead of time.
/*
for (initialization; condition; update) {
    // code block to be executed
}
*/
#include<iostream>
using namespace std;
int main () {
    int i;
    for (i = 1; i<=10; i++) {
        cout << i <<" " ;
    }
    return 0;
}