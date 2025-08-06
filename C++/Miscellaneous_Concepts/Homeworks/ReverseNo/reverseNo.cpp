#include <iostream>
using namespace std;

int reverseNo(int n) {
    int rev = 0;
    while (n > 0) {
        int digit = n % 10;
        rev = rev * 10 + digit;
        n /= 10;
    }
    return rev;
}

int main() {
    int n;
    cout << "enter a num: ";
    cin >> n;

    cout << "\nReversed number: " << reverseNo(n) << endl;
    return 0;
}