#include <iostream>
#include <cmath>     // for math functions
#include <cstdlib>   // for exit()

using namespace std;

void showMenu() {
    cout << "\n=== Scientific Calculator ===\n";
    cout << "1. Addition\n";
    cout << "2. Subtraction\n";
    cout << "3. Multiplication\n";
    cout << "4. Division\n";
    cout << "5. Power (x^y)\n";
    cout << "6. Square Root\n";
    cout << "7. Sine (sin)\n";
    cout << "8. Cosine (cos)\n";
    cout << "9. Tangent (tan)\n";
    cout << "10. Logarithm (base e)\n";
    cout << "11. Logarithm (base 10)\n";
    cout << "0. Exit\n";
    cout << "Choose an option: ";
}

int main() {
    int choice;
    double a, b;

    while (true) {
        showMenu();
        cin >> choice;

        switch (choice) {
        case 1:
            cout << "Enter two numbers: ";
            cin >> a >> b;
            cout << "Result = " << a + b << endl;
            break;
        case 2:
            cout << "Enter two numbers: ";
            cin >> a >> b;
            cout << "Result = " << a - b << endl;
            break;
        case 3:
            cout << "Enter two numbers: ";
            cin >> a >> b;
            cout << "Result = " << a * b << endl;
            break;
        case 4:
            cout << "Enter two numbers: ";
            cin >> a >> b;
            if (b != 0)
                cout << "Result = " << a / b << endl;
            else
                cout << "Error: Division by zero!\n";
            break;
        case 5:
            cout << "Enter base and exponent: ";
            cin >> a >> b;
            cout << "Result = " << pow(a, b) << endl;
            break;
        case 6:
            cout << "Enter number: ";
            cin >> a;
            if (a >= 0)
                cout << "Result = " << sqrt(a) << endl;
            else
                cout << "Error: Negative number!\n";
            break;
        case 7:
            cout << "Enter angle in radians: ";
            cin >> a;
            cout << "Result = " << sin(a) << endl;
            break;
        case 8:
            cout << "Enter angle in radians: ";
            cin >> a;
            cout << "Result = " << cos(a) << endl;
            break;
        case 9:
            cout << "Enter angle in radians: ";
            cin >> a;
            cout << "Result = " << tan(a) << endl;
            break;
        case 10:
            cout << "Enter number: ";
            cin >> a;
            if (a > 0)
                cout << "Result = " << log(a) << endl;
            else
                cout << "Error: Log undefined!\n";
            break;
        case 11:
            cout << "Enter number: ";
            cin >> a;
            if (a > 0)
                cout << "Result = " << log10(a) << endl;
            else
                cout << "Error: Log undefined!\n";
            break;
        case 0:
            cout << "Exiting...\n";
            exit(0);
        default:
            cout << "Invalid choice! Try again.\n";
        }
    }

    return 0;
}
