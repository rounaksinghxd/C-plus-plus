//In this code we learn about Operators in C++
/*
We will start from Logical Operators because we already learned about all other operators in Python and C Programming Language.

// Logical Operator: Logical operators are used to combine two or more conditions or constraints or to complement the evaluation of the original condition in consideration. 
The result returns a Boolean value, i.e., true or false.

Logical AND, &&, Returns true only if all the operands are true or non-zero
Logical OR, ||, Returns true if either of the operands is true or non-zero
Logical NOT, !, Returns true if the operand is false or zero
*/
#include <iostream>
using namespace std;

int main() {
    int a = 6, b = 4;

    // Logical AND operator
    cout << "a && b is " << (a && b) << endl;
  
    // Logical OR operator
    cout << "a || b is " << (a || b) << endl;
  
    // Logical NOT operator
    cout << "!b is " << (!b);

    return 0;
}
/*
//Bitwise Operators: Bitwise operators are works on bit-level. 
So, compiler first converted to bit-level and then the calculation is performed on the operands.

Binary AND, &, Copies a bit to the result if it exists in both operands
Binary OR, |, Copies a bit to the result if it exists in any of the operands
Binary XOR, ^, Copies the bit to the result if it is present in either of the operands but not both
Left Shift, <<, Shifts the value to the left by the number of bits specified by the right operand
Right Shift, >>, Shifts the value to the right by the number of bits specified by the right operand
One's Complement, ~, Changes binary digits 1 to 0 and 0 to 1
*/
#include <iostream>
using namespace std;

int main() {
    int a = 6, b = 4;

    // Binary AND operator
    cout << "a & b is " << (a & b) << endl;

    // Binary OR operator
    cout << "a | b is " << (a | b) << endl;

    // Binary XOR operator
    cout << "a ^ b is " << (a ^ b) << endl;

    // Left Shift operator
    cout << "a << 1 is " << (a << 1) << endl;

    // Right Shift operator
    cout << "a >> 1 is " << (a >> 1) << endl;

    // One’s Complement operator
    cout << "~(a) is " << ~(a);

    return 0;
}

/*
// Assignment Operators: Assignment Operators
Assignment operators are used to assign value to a variable. 
We assign the value of right operand into left operand according to which assignment operator we use.  

Assignment, =, Assigns the value on the right to the variable on the left
Add and Assignment, +=, Adds the right operand to the left operand and assigns the result to the left operand
Subtract and Assignment, -=, Subtracts the right operand from the left operand and assigns the result to the left operand
Multiply and Assignment, *=, Multiplies the left operand by the right operand and assigns the result to the left operand
Divide and Assignment, /=, Divides the left operand by the right operand and assigns the result to the left operand
*/
#include <iostream>
using namespace std;

int main() {
    int a = 6, b = 4;

    // Assignment Operator.
    cout << "a = " << a << endl;
  
    //  Add and Assignment Operator.
    cout << "a += b is " << (a += b) << endl;
  
    // Subtract and Assignment Operator.
    cout << "a -= b is " << (a -= b) << endl;
  
    //  Multiply and Assignment Operator.
    cout << "a *= b is " << (a *= b) << endl;
  
    //  Divide and Assignment Operator.
    cout << "a /= b is " << (a /= b);

    return 0;
}
/*
// Tenary or Conditional Operators
Conditional operator returns the value, based on the condition. This operator takes three operands, therefore it is known as a Ternary Operator.
Syntax:

Expression1 ? Expression2 : Expression3
In the above statement:
The ternary operator ? determines the answer on the basis of the evaluation of Expression1.
If Expression1 is true, then Expression2 gets evaluated.
If Expression1 is false, then Expression3 gets evaluated.
*/
#include <iostream>
using namespace std;

int main() {
    int a = 3, b = 4;

    // Conditional Operator
    int result = (a < b) ? b : a;
    cout << "The greatest number "
          "is " << result;

    return 0;
}
/*
//Miscellaneous Operators
Apart from these operators, there are a few operators that do not fit in any of the above categories. These are:
sizeof Operator
sizeof operator is a unary operator used to compute the size of its operand or variable in bytes. For example,

sizeof (char);
sizeof (var_name);

// Comma Operator (,)
Comma operator is a binary operator that is used for multiple purposes. It is used as a separator or used to evaluate its first operand and discards the result; it then evaluates the second operand and returns this value (and type).

int n = (m+1, m-2, m+5);
int a, b, c;

//Addressof Operator (&)
Addressof operator is used to find the memory address in which a particular variable is stored. In C++, it is also used to create a reference.

&var_name;

//Dot Operator(.)
Dot operator is used to access members of structure variables or class objects using their object names.

obj . member;

//Arrow Operator
Arrow operator is used to access the variables of classes or structures through its pointer.

sptr -> member;

//Casting Operators
Casting operators are used to convert the value of one data type to another data type. For example, for an integer value x:

(float)x
static_cast<float>(x)


*/
