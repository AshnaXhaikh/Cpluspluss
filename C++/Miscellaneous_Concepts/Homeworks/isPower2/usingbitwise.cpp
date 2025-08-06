#include <iostream>
using namespace std;

int main() {
    int n = 10;

    
    if (n > 0 && (n & (n - 1)) == 0) {
        cout << n << " is power of 2";
    } else {
        cout << n << " is not a power of 2";
    }
    

    return 0;
}
