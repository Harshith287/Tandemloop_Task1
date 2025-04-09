#include <bits/stdc++.h>
using namespace std;

class Calculator {
private:
    double a, b;
    string operation;

public:
    Calculator(double a, double b, string operation) {
        this->a = a;
        this->b = b;
        this->operation = operation;
    }

    double calculate() {
        if (operation == "+") {
            return a + b;
        }
        else if (operation == "-") {
            return a - b;
        }
        else if (operation == "*") {
            return a * b;
        }
        else if (operation == "/") {
            if (b != 0) {
                return a / b;
            } else {
                cout << "Error: Division by zero!" << endl;
                return 0;
            }
        } else {
            cout << "Error: Invalid operation!" << endl;
            return 0;
        }
    }
};

int main() {
    double a, b;
    string operation;

    cout << "Enter first number (a): ";
    cin >> a;
    cout << "Enter second number (b): ";
    cin >> b;
    cout << "Enter the operation (+,-,*,/): ";
    cin >> operation;

    Calculator calc(a, b, operation);

    double result = calc.calculate();
    cout << "The result of " << operation << " operation is: " << result << endl;

    return 0;
}
