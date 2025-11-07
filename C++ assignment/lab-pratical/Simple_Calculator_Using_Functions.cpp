#include <iostream>
using namespace std;

float add(float a, float b) { return a + b; }
float sub(float a, float b) { return a - b; }
float mul(float a, float b) { return a * b; }
float divi(float a, float b) { return (b != 0) ? a / b : 0; }

int main() {
    float x, y;
    char op;
    cout << "Enter first number: ";
    cin >> x;
    cout << "Enter operator (+, -, *, /): ";
    cin >> op;
    cout << "Enter second number: ";
    cin >> y;

    if (op == '+') cout << "Result: " << add(x, y);
    else if (op == '-') cout << "Result: " << sub(x, y);
    else if (op == '*') cout << "Result: " << mul(x, y);
    else if (op == '/') cout << "Result: " << divi(x, y);
    else cout << "Invalid operator!";

    
}

