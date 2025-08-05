#include <iostream>
using namespace std;

int main() {
    int a = 10;   // binary: 0101
    int b = 2;   // binary: 0011

    cout << "a = " << a << ", b = " << b << endl;

    cout << "a & b = " << (a & b) << endl;   // AND
    cout << "a | b = " << (a | b) << endl;   // OR
    cout << "a ^ b = " << (a ^ b) << endl;   // XOR
    cout << "~a = " << (~a) << endl;         // NOT
    cout << "a << 1 = " << (a << 1) << endl; // Left Shift
    cout << "a >> 1 = " << (a >> 1) << endl; // Right Shift

    return 0;
}
