#include <iostream>
using namespace std;

int main() {
    int a = 5;
    float b = 2.5;

    
    float result1 = a + b;
    cout << "Implicit conversion result: " << result1 << endl;

    
    int result2 = a + (int)b;
    cout << "Explicit conversion result: " << result2 << endl;

     
}

