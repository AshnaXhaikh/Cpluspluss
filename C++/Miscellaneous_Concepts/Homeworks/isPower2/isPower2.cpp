#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "enter a number: ";
    cin >> n;
    int orig = n;
    bool isPower=true;

    while (n>1) {
        if (n%2 != 0) {
            isPower = false;
            break;
        } 
        n /= 2;
    }

    if (isPower) {
        cout << orig << " is power of 2\n"; 
    } else {
        cout << orig << " is NOT power of 2";
    }
    return 0;
}