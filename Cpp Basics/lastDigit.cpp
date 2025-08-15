// Cpp Basics - Program to Extaract last digit of a number

#include <iostream>
using namespace std;

int main() {

    int number;
    cout << "Enter a number: ";
    cin >> number;

    int lastDigit = number % 10;
    cout << "The last digit of " << number << " is " << lastDigit << endl;
    
    return 0;
}