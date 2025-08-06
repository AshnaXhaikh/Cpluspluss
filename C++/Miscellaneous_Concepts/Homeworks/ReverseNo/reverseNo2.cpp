#include <iostream>
#include <string>
using namespace std;

string reverseNo(int n) {
    string rev=" ";
    while (n > 0) {
        int digit = n % 10;
        rev += to_string(digit);
        n /= 10;
    }
    return rev;
}

int main() {
    int n;
    cout << "enter a num: ";
    cin >> n;
    
    cout << "Reversed number: " << reverseNo(n);
    return 0;
}