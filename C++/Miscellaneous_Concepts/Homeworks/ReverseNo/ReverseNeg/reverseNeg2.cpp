
#include <iostream>
#include <string>
using namespace std;

string reverseNumber(int n) {
    bool isNegative = (n < 0);
    if (isNegative) n = -n;

    string rev = "";
    while (n > 0) {
        int digit = n % 10;
        rev += to_string(digit);
        n = n / 10;
    }

    if (isNegative) rev = "-" + rev;
    return rev;
}


int main() {
    int n = 100;
    cout << "Reversed number: " << reverseNumber(n);
    return 0;
}