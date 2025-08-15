// Cpp Basics - Program to find the greatest number among the given 4 numbers

#include <iostream>
using namespace std;

int main() {

    int num1;
    cout << "Enter the first number: ";
    cin >> num1;

    int num2;
    cout << "Enter the second number: ";
    cin >> num2;

    int num3;
    cout << "Enter the third number: ";
    cin >> num3;

    int num4;
    cout << "Enter the fourth number: ";
    cin >> num4;

    if(num1 > num2 && num1 > num3 && num1 > num4){
        cout << "The greatest number among the given 4 numbers is " << num1 << endl;
    }

    else if(num2 > num1 && num2 > num3 && num2 > num4){
        cout << "The greatest number among the given 4 numbers is " << num2 << endl;
    }

    else if(num3 > num1 && num3 > num2 && num3 > num4){
        cout << "The greatest number among the given 4 numbers is " << num3 << endl;
    }

    else {
        cout << "The greatest number among the given 4 numbers is " << num4 << endl;
    }

    return 0;
}