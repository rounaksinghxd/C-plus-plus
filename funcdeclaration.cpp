// We can use Function with two types:
/*
First one is by Defining function completely above main() as we used already in previous questions in function.
and, Second one is by Declare a prototype above main then define it below.
*/
#include <iostream>
using namespace std;
/* 
// Find sum of 1 to N

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
} 
// Find factorial of n number:
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


// Find the sum of digits:
int sumN(int n);

int main() {
    int value = sumN(2356);
    cout<<"The addition of the digits are:"<<value<<endl;
    return 0;
    
}

int sumN(int n){
    int sum = 0;
    while (n>0) {
       int lastDig = n%10;
       n /= 10;
       sum += lastDig;
    }
    return sum;
}
*/
// Find the binomial expression nCr:
int factorial(int num) {
    int fact = 1;
    for (int i = 1; i <= num; i++) {
        fact *= i;
    }
    return fact;
}

// Function to calculate nCr using the factorial helper
int nCr(int n, int r) {
    int numerator = factorial(n);
    int denominator = factorial(r);
    int denominator2 = factorial(n - r);
    
    return numerator / (denominator * denominator2);
}

int main() {
    // Calculating 8C6
    int value = nCr(8, 6);
    cout << "The binomial expression value is: " << value << endl;
    return 0;
}
