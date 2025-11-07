#include <iostream>
using namespace std;

int main() {
    int marks;

    cout << "Enter your marks (0 - 100): ";
    cin >> marks;

    if (marks >= 90)
        cout << "Grade: A\n";
    else if (marks >= 80)
        cout << "Grade: B\n";
    else if (marks >= 70)
        cout << "Grade: C\n";
    else if (marks >= 60)
        cout << "Grade: D\n";
    else if (marks >= 40)
        cout << "Grade: E\n";
    else
        cout << "Grade: F (Fail)\n";

  
}

