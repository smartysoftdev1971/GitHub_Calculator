#include <iostream>
#include <limits>
using namespace std;

// Function to display calculator information
void displayInfo()
{
    cout << "\nSimple Calculator Application" << endl;
    cout << "Supports Addition, Subtraction, Multiplication and Division" << endl;
    cout << "Developed using C++ and Git" << endl;
}

// Function for addition
double add(double a, double b)
{
    return a + b;
}

// Function for subtraction
double subtract(double a, double b)
{
    return a - b;
}

// Function for multiplication
double multiply(double a, double b)
{
    return a * b;
}

// Function for division
// Returns false when division by zero is attempted.
bool divide(double a, double b, double &result)
{
    if (b == 0)
    {
        cout << "Error: Division by zero is not allowed!" << endl;
        return false;
    }

    result = a / b;
    return true;
}

int main()
{
    int choice;
    double num1, num2, result;

    displayInfo();

    do
    {
        cout << "\n========== CALCULATOR ==========" << endl;
        cout << "1. Addition" << endl;
        cout << "2. Subtraction" << endl;
        cout << "3. Multiplication" << endl;
        cout << "4. Division" << endl;
        cout << "5. Exit" << endl;

        cout << "\nEnter your choice: ";

        // Check that the menu choice is a valid integer.
        if (!(cin >> choice))
        {
            cout << "Invalid input! Please enter a number from 1 to 5." << endl;
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            continue;
        }

        if (choice >= 1 && choice <= 4)
        {
            cout << "Enter first number: ";
            if (!(cin >> num1))
            {
                cout << "Invalid input! Please enter a numeric value." << endl;
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                continue;
            }

            cout << "Enter second number: ";
            if (!(cin >> num2))
            {
                cout << "Invalid input! Please enter a numeric value." << endl;
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                continue;
            }
        }

        switch (choice)
        {
            case 1:
                cout << "Result: " << add(num1, num2) << endl;
                break;

            case 2:
                cout << "Result: " << subtract(num1, num2) << endl;
                break;

            case 3:
                cout << "Result: " << multiply(num1, num2) << endl;
                break;

            case 4:
                if (divide(num1, num2, result))
                {
                    cout << "Result: " << result << endl;
                }
                break;

            case 5:
                cout << "Exiting Calculator. Goodbye!" << endl;
                break;

            default:
                cout << "Invalid choice! Please enter a choice from 1 to 5." << endl;
        }

    } while (choice != 5);

    return 0;
}
