#include <iostream>
using namespace std;

// Global variable
int x = 10;

void showLocalScope() {
    int x = 5;  // Local variable (different from global x)
    cout << "Inside function, local x = " << x << endl;
}

int main() {
    cout << "In main, global x = " << x << endl;
    showLocalScope();
    cout << "Back in main, global x = " << x << endl;

    return 0;
}
