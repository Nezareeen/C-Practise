// Cpp Basics - Program to grade the scores of students

#include <iostream>
using namespace std;

int main() {

    int score;
    cout << "Enter your marks: ";
    cin >> score;

    if (score == 0 || score <= 50){
        cout << "NTI";
    }

    else if (score == 51 || score <= 60){
        cout << "PI";
    }

    else if (score == 61 || score <= 70){
        cout << "I";
    }

    else if (score == 71 || score <= 80){
        cout << "EM";
    }

    else if (score == 81 || score <= 100){
        cout << "HO";
    }

    else{
        cout << "Please enter your valid marks from 0 - 100 !";
    }

    return 0;
}