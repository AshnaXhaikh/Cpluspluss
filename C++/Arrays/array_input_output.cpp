#include <iostream>
using namespace std;

int main() {
    const int size = 5;
    int marks[size];

    // Input
    cout << "Enter " << size << " marks: " << endl;
    for (int i = 0; i < size; i++) {
        cin >> marks[i];
    }

    // Output
    cout << "\nYou entered: ";
    for (int i = 0; i < size; i++) {
        cout << marks[i] << " ";
    }

    // Display size in elements
    cout << "\n\nNumber of elements: " << (sizeof(marks) / sizeof(marks[0])) << endl;
    cout << "Total size in bytes: " << sizeof(marks) << endl;

    return 0;
}
