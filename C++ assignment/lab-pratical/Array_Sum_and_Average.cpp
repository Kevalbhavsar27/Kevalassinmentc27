#include <iostream>
using namespace std;

int main() {
    int n;
    int arr[100];
    int sum = 0;
    float average;

    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter " << n << " numbers: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        sum = sum + arr[i];
    }

    average = sum / (float)n;

    cout << "\nSum = " << sum;
    cout << "\nAverage = " << average;
}

