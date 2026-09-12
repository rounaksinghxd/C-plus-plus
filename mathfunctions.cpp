// In this file we will use Function to add two integer:
#include<iostream>
using namespace std;
int addinteger(int a, int b){ //in this line of code we define two parameters which is used to store two integer
    int sum = a+b; 
    return sum;
}
// minimum of two integer:
int minofInt(int c, int d){
    if(c<d){
        cout<<"c is minimum"<<endl;
    } else{
        cout<<"d is minimum"<<endl;
    }
}

int main() {
    cout<<minofInt(35, 20)<<endl;
    return 0;
}
