#include <iostream>
using namespace std;

// -----------function for nth fibonacci------------------------


// using while loop
int nthFibonacci(int n) {
    if (n == 0) return 0;
    if (n == 1) return 1;

    int a = 0;
    int b = 1;
    for (int i=2; i<=n; i++) {
        int next = a + b;
        a = b;
        b = next; 
    }
    return b;
    
}

// using while loop 
int fib(int n) {
    if (n == 0) return 0;
    if (n == 1) return 1;

    int a = 0;
    int b = 1; 
    int i = 2; 

    while (i <= n) {
        int nth = a + b;
        a = b; 
        b = nth;
        i++;
    }
    return b;
}

int main() {
    int n; 
    cout << "\nenter nth of fibonacci: ";
    cin >> n;

    cout << "for loop: " << nthFibonacci(n);

    cout << "\nwhile loop: " << fib(n);
    return 0;
}

// 03-08-2025