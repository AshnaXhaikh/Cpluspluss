#include <iostream>
using namespace std;

void printHello() {
    cout << "Hello! " << endl;
}

int sum(int a, int b) {
    int s = a + b; 
    return s;
}

int minOfTwo(int a, int b) {  // parameters
    if (a < b) {
        return a; 
    } else {
        return b;
    }
}

int printPyramid(int n) {
    // upper part

    for (int i=0; i<n; i++) {

        //spaces
        for (int j=0; j<n-i-1; j++) {
            cout << " ";
        }

        // left stars
        for (int j=0; j<i+1; j++) {
            cout << "* ";
        }
        cout << endl;
    }
    // lower part
    for (int i=n-1; i>0; i--) {
        // spaces
        for (int j=0; j<n-i; j++) {
            cout << " ";
        }
        // left stars
        for (int j=0; j<i; j++) {
            cout << "* ";
        }
        cout << endl;
    }
}

// print the functions
int main() {

    printHello();
    printPyramid(5);
    cout << "Sum = " << sum(4, 8) << endl;
    cout << "Min =  " << minOfTwo(4, 8) << endl;
    return 0;
}