#include <iostream>
using namespace std;

class Calculator {
public:
    float add(float a, float b) {
        return a + b;
    }

    float sub(float a, float b) {
        return a - b;
    }

    float mul(float a, float b) {
        return a * b;
    }

    float divi(float a, float b) {
        return a / b;
    }
};

int main() {
    Calculator c;
    float num1, num2;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    cout << "Addition = " << c.add(num1, num2) << endl;
    cout << "Subtraction = " << c.sub(num1, num2) << endl;
    cout << "Multiplication = " << c.mul(num1, num2) << endl;
    cout << "Division = " << c.divi(num1, num2) << endl;


}

