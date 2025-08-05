#include <iostream>
using namespace std;

int main() {
    unsigned int a = 100;     // Only positive numbers
    signed int b = -50;       // Can store negatives
    short int c = 10;         // Smaller range
    long int d = 100000;      // Larger range
    long long int e = 1000000000; // Very large range

    cout << "Unsigned int: " << a << endl;
    cout << "Signed int: " << b << endl;
    cout << "Short int: " << c << endl;
    cout << "Long int: " << d << endl;
    cout << "Long long int: " << e << endl;

    cout << sizeof(int) << endl;
    cout << sizeof(long int) << endl;
    cout << sizeof(short int) << endl;
    cout << sizeof(long long int) << endl;

    return 0;
}
