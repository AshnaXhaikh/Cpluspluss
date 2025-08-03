#include <iostream>
using namespace std;

// 1. if n is Prime or not
bool isPrime(int n) {
    if (n < 2) return false;

    for (int i = 2; i <= n - 1; i++) {
        if (n % i == 0) {
            return false; // found a divisor, not prime
        }
        // no break here — keep checking all possible divisors
    }
    return true; // no divisors found, so it is prime
}


bool isprime(int n) {
    if (n<2) return false;

    bool prime = true;
    for (int i=2; i*i <= n; i++) {
        if (n % i == 0) {
            prime = false;
            break;
        }
    }
    return prime;
}


// 2. print all prime no from 1 to n (without sqrt)
void allPrime(int n) {
    for (int i=2; i <=n; i++){
        if (isPrime(i)){
            cout << i << ", ";
        }
    }
}

void allPrimes(int n) {
    for (int i=2; i <= n; i++) {
        if (isprime(i)) {
            cout << i << ", ";
        }
    }
}

int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;

    if (isPrime(n)) {
        cout << n << " is Prime" << endl;
    } else {
        cout << n << " is Not Prime" << endl;
    }

    // cout << "\nby sqrt technique: \n" << isprime << endl;
    if (isprime(n)) {
        cout << n << " is Prime" << endl;
    } else {
        cout << n << " is Not Prime" << endl;
    }

    // prime numbers form 1 to n
    cout << "\nAll prime no from 1 to " << n << " :" << endl;
    allPrime(n);

    cout << "\n\nAll prime no from 1 to " << n << " (by sqrt ) :" << endl;
    allPrimes(n);   

    return 0;
}