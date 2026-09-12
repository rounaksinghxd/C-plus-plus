// We can use Function with two types:
/*
First one is by Defining function completely above main() as we used already in previous questions in function.
and, Second one is by Declare a prototype above main then define it below.
*/
// Find sum of 1 to N
#include <iostream>
using namespace std;
/* 
int sumN(int n); // Function declaration prototype

int main() {
    //Function call
    int sum = sumN(10); 
    cout<<"The sum from 1 to N is:"<<sum<<endl;
    return 0;
}
//Function Defination
int sumN(int n) {
    int a =0;
    int i;
    for(i=0; i<=n; i++) {
        a+=i;
    }
    return a;
} */
int factorial(int n);

int main() {
    int value = factorial(5);
    cout<<"Factorial of N is:"<<value<<endl;
    return 0;
}

int factorial(int n){
    int fact = 1;
    int i;
    for (i=1; i<=n; ++i) {
        fact *= i;
    }
    return fact;

   
}
