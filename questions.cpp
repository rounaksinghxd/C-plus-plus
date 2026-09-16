#include <iostream>

using namespace std;

/*
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
*/


// Check whether the entered number is prime or not:
// Function returns 1 if prime, and 0 if not prime
int isPrime(int n) {
    // Numbers less than or equal to 1 are not prime
    if (n <= 1) {
        return 0; // 0 represents false
    }

    // Check factors up to the square root of n
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return 0; // Factor found, return 0 (false)
        }
    }

    return 1; // No factors found, return 1 (true)
}

int main() {
    int num;
    
    cout << "Enter a positive integer: ";
    cin >> num;

    // The if-statement treats 1 as true and 0 as false
    if (isPrime(num) == 1) {
        cout << num << " is a prime number." << endl;
    } else {
        cout << num << " is not a prime number." << endl;
    }

    return 0;
}

