#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int choice;
    double num1, num2, result;
    char again;

    do {
        cout << "\n===== C++ Calculator =====\n";
        cout << "1. Addition\n";
        cout << "2. Subtraction\n";
        cout << "3. Multiplication\n";
        cout << "4. Division\n";
        cout << "5. Power\n";
        cout << "6. Square Root\n";
        cout << "7. Percentage\n";
        cout << "8. Modulus\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch(choice) {
            case 1:
                cout << "Enter two numbers: ";
                cin >> num1 >> num2;
                result = num1 + num2;
                cout << "Result = " << result << endl;
                break;

            case 2:
                cout << "Enter two numbers: ";
                cin >> num1 >> num2;
                result = num1 - num2;
                cout << "Result = " << result << endl;
                break;

            case 3:
                cout << "Enter two numbers: ";
                cin >> num1 >> num2;
                result = num1 * num2;
                cout << "Result = " << result << endl;
                break;

            case 4:
                cout << "Enter two numbers: ";
                cin >> num1 >> num2;
                if(num2 != 0)
                    cout << "Result = " << num1 / num2 << endl;
                else
                    cout << "⚠️ Error: Cannot divide by zero!\n";
                break;

            case 5:
                cout << "Enter base and power: ";
                cin >> num1 >> num2;
                cout << "Result = " << pow(num1, num2) << endl;
                break;

            case 6:
                cout << "Enter a number: ";
                cin >> num1;
                if(num1 >= 0)
                    cout << "Result = " << sqrt(num1) << endl;
                else
                    cout << "⚠️ Error: Cannot find square root of negative number!\n";
                break;

            case 7:
                cout << "Enter total value and percentage: ";
                cin >> num1 >> num2;
                cout << "Result = " << (num1 * num2) / 100 << endl;
                break;

            case 8:
                int a, b;
                cout << "Enter two integers: ";
                cin >> a >> b;
                if(b != 0)
                    cout << "Result = " << a % b << endl;
                else
                    cout << "⚠️ Error: Cannot modulus by zero!\n";
                break;

            default:
                cout << "⚠️ Invalid choice! Please try again.\n";
        }

        cout << "\nDo you want to calculate again? (y/n): ";
        cin >> again;

    } while(again == 'y' || again == 'Y');

    cout << "\nThank you for using the calculator 😊\n";

    return 0;
}