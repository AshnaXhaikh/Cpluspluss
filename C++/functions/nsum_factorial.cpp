#include <iostream>
using namespace std;

// cal sum of n numbers 1 to n
int nSum(int n) {
    int sum = 0;
    for(int i=1; i<=n; i++) {
        sum += i;
    }
    return sum;
}

// calculate N factorial
int nfactorial(int n) {
    int product=1;
    for (int i=1; i<=n; i++) {
        product *= i;
    }
    return product;
}
int main() {
    int n; 
    cout << "Enter a number: ";
    cin >> n;

    cout << "Sum of numbers from 1 to " << n << " is: " << nSum(n) << endl;
    cout << "Factorial of " << n << " is: " << nfactorial(n) << endl;
    return 0;
}