#include <iostream>
using namespace std;

int main() {
    int num1, num2, choice;

    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    cout << "Menu" << endl;
    cout << "Press 1 to Add" << endl;
    cout << "Press 2 to Subtract" << endl;
    cout << "Press 3 to Exit" << endl;
    cout << "Enter your choice (1-3): ";
    cin >> choice;

    switch (choice) {
    case 1:
        cout << "Result (Addition) = " << num1 + num2;
        break;

    case 2:
        cout << "Result (Subtraction) = " << num1 - num2;
        break;

    case 3:
        cout << "Exiting program...";
        break;

    default:
        cout << "Invalid choice! Please select 1, 2, or 3.";
    }

    return 0;
}
