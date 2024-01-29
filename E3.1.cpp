// Write a program that reads an integer and prints whether it is negative, zero, or positive.
// Author: Zuhayer Tashin
// Course: CSCI-135
// Instructor: Tong Yi

#include <iostream>
using namespace std;


int main (){
    int integer_1; //Decalared an integer variable
    cout << "Enter an integer: " << endl;
    cin >> integer_1; //User inputs the integer

    if (integer_1 < 0){
        cout << "Negative" << endl; 

    } else if (integer_1 > 0){
        cout << "Positive" << endl;
    } else {
        cout << "Zero" << endl;
    }
}