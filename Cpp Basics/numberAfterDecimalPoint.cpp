// Cpp Basics - Program to find the number after a decimal point

#include <iostream>
using namespace std;

int main() {

    float number;
    cout << "Enter a floating point number: ";
    cin >> number;

    int beforeDecimal = (number * 10);
    int afterDecimal = beforeDecimal % 10;
    cout << "The number after the decimal point is: " << afterDecimal << endl;

    return 0;
}