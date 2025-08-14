#include <iostream>
using namespace std;

unsigned long long fib(unsigned long long n){
    if (n<=1) {
        return n;
    }
    return fib(n-1) + fib(n-2);
}

int main() {
    int n;
    cout << "Enter a number : ";
    cin >> n;


    int i = 0;
    cout << "Fibonacci Series till " << n << "th : " << endl;
    for (int i=0; i<=n; i++) {
        cout << fib(i) << " ";
    }

    
    return 0;
}