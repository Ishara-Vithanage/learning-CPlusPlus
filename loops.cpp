#include <iostream>
using namespace std;

int main() {
    int mark;

    cout << "Enter mark: ";
    cin >> mark;

    if (mark >= 75 && mark <= 100) {
        cout << "Distinction";
    }
    else if (mark >= 65 && mark <= 74 ) {
        cout << "Very good pass";
    }
    else if (mark >= 55 && mark <= 64 ) {
        cout << "Credit pass";
    }

    else if (mark >= 40 && mark <= 54 ) {
        cout << "Pass";
    }

    else if (mark < 40 && mark >= 0) {
        cout << "Failed";
    }
    else {
        cout << "Invalid marks";
    }
}
