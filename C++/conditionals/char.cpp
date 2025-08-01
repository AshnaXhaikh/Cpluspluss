#include <iostream>
using namespace std;

int main() {
    char ch;
    cout << "Enter a char: ";
    cin >> ch;
    
    if (ch >= 65 && ch <= 90) {
        cout << "UpperCase\n";
    } else {
        cout << "LowerCase";
    }
    // if (ch >= 'a' && ch <= 'z') {
    //     cout << "lowercase\n"; // (97)
    // } else {
    //     cout << "uppercase"; // (65 to 90)
    // }
    return 0;
}