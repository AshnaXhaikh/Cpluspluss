#include <iostream>
using namespace std; 

int sum(int a, int b) {
    a += 10;
    b += 10;
    cout << "In sum function : a = " << a << ", b = " << b << endl;
    return a + b;
}

void changeX(int x) {
    x = 2*x;
    cout << "X = " << x << endl;
}

int main() {
    // int a = 3, b = 7;
    // // sum(a, b);
    // cout << "Sum = " << sum(a, b) << endl;
    // cout << "In main function : \na = " << a << ", b = " << b << endl;

    int x = 5;
    changeX(x);
    cout << "X = " << x << endl;
    return 0;
}
