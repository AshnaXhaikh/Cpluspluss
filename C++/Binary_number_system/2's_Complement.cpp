#include <iostream>
using namespace std;


#include <iostream>
using namespace std;

string toBinary(int n, int bits) {
    string s = "";
    for (int i = bits - 1; i >= 0; i--) {
        int mask = 1 << i;
        s += (n & mask) ? '1' : '0';
    }
    return s;
}

int main() {
    int num;
    cout << "Enter an integer: ";
    cin >> num;

    const int WIDTH = 8; // example: 8-bit representation
    cout << "Two's complement (as stored) in " << WIDTH << " bits: ";
    cout << toBinary(num, WIDTH) << endl;

    return 0;
}
