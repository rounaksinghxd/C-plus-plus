#include <iostream>
using namespace std; //we use this line of code because after this code we didn't have to use std in cout or cin.

int main()

{
    int first_number, second_number, sum; // It is a type of data type which is used to store whole number without a decimal.

    cout << "Enter two integers: "; // It is used to display the output
    cin >> first_number >> second_number; //It is used to store the value.

    sum = first_number + second_number;

    cout << first_number << " + " << second_number << " = " << sum << std::endl;

    return 0;
}
