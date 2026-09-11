// In this file we will use Function to add two integer:
#include<iostream>
using namespace std;
int addinteger(int a, int b){ //in this line of code we define two parameters which is used to store two integer
    int sum = a+b; 
    return sum;
}
int main() {
    cout<<addinteger(10, 20)<<endl;
    return 0;
}
