#include <iostream>
using namespace std;

float calculateAreaPOP(float length, float width) {
    return length * width;
}

private:
    float length, width;

public:
    void getData() {
        cout << "Enter length of rectangle: ";
        cin >> length;
        cout << "Enter width of rectangle: ";
        cin >> width;
    }

    float calculateArea() {
        return length * width;
    }
};

int main() {
    int choice;
    cout << "==== Rectangle Area Calculator ====\n";
    cout << "1. Procedural Programming (POP)\n";
    cout << "2. Object-Oriented Programming (OOP)\n";
    cout << "Enter your choice (1 or 2): ";
    cin >> choice;

    if (choice == 1) {
        
        float length, width;
        cout << "\n[Procedural Programming]\n";
        cout << "Enter length of rectangle: ";
        cin >> length;
        cout << "Enter width of rectangle: ";
        cin >> width;
        float area = calculateAreaPOP(length, width);
        cout << "Area of rectangle (POP): " << area << endl;

    } else if (choice == 2) {
        
        cout << "\n[Object-Oriented Programming]\n";
        Rectangle rect;
        rect.getData();
        cout << "Area of rectangle (OOP): " << rect.calculateArea() << endl;

    } else {
        cout << "Invalid choice! Please enter 1 or 2.\n";
    }  
}

