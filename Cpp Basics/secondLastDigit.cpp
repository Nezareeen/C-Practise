// Cpp Basics - Program to Extract the Second last digit of a number

#include <iostream>
using namespace std;

int main() {

    int number;
    cout << "Enter a number: ";
    cin >> number;

    if (number < 10){
        cout << "Please enter a two digit number!";
    }

    else{
    int secondLastDigit = (number/10) % 10;
    cout << "The Second last digit of " << number << " is " << secondLastDigit << endl;
    }

    return 0;
}