// Cpp Basics - Program to Given an input number n, write a pseudocode to calculate the sum of digits of the number of 2 raised to the power n. Print -1 if n < = 0.

//Constraints: 0 < n < = 16
//Sample Input: 15
//Sample Output: 26
//Explanation:
//2^15 = 32768 and the sum of its digits is 3 + 2 + 7 + 6 + 8 = 26

#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter a number (0 < n <= 16): ";
    cin >> n;

    if (n <= 0 || n > 16) {
        cout << -1 << endl;
        return 0;
    }

    long long power = 1; // Initialize to 2^0
    for (int i = 0; i < n; ++i) {
        power *= 2; // Calculate 2^n
    }

    int sumOfDigits = 0;
    while (power > 0) {
        sumOfDigits += power % 10; // Add last digit to sum
        power /= 10; // Remove last digit
    }

    cout << sumOfDigits << endl; // Output the sum of digits
    return 0;
}