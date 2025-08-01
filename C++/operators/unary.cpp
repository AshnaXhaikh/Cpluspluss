#include <iostream>
using namespace std;

// unary operators: increment and decrement
int main() {
    int a = 10;
    int b;

    cout << b = a++ << endl; // post-increment: b gets the value of a, then a is incremented
    cout << b = ++a << endl; // pre-increment: a is incremented, then b gets the new value of a
    cout << b = a-- << endl; // post-decrement: b gets the value of a, then a is decremented
    cout << b = --a << endl; // pre-decrement: a is decremented
    // cout << "a = " << a << endl;
    // cout << "++a = " << ++a << endl; // pre-increment
    // cout << "a++ = " << a++ << endl; // post-increment
    // cout << "a after post-increment = " << a << endl; // value after post-increment

    // cout << "--a = " << --a << endl; // pre-decrement
    // cout << "a-- = " << a-- << endl; // post-decrement
    // cout << "a after post-decrement = " << a << endl; // value after post-decrement
    // cout << "Final value of a = " << a << endl; // final value of a
    return 0;
}