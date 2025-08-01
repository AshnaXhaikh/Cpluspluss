#include <iostream>
using namespace std;

// pipe operator || ampersand && not !
int main() {
    // let's do four basic logical operations
    cout << "Enter 1st boolean value (0 or 1): ";
    bool a, b;
    cin >> a;
    cout << "Enter 2nd boolean value (0 or 1): ";
    cin >> b;
    cout << "a || b = " << (a ||b) << endl;
    cout << "a && b = " << (a && b) << endl;
    cout << "!a = " << (!a) << endl;
    cout << "!b = " << (!b) << endl;
    cout << "a || !b = " << (a || !b) << endl;
    
    return 0;
}