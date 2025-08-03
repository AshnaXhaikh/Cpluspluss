#include <iostream>
using namespace std;

// int nCr(int n, int r) {
//     if (r > n) {
//         return 0; // nCr is not defined for r > n
//     }
//     if (r == 0 || r == n) {
//         return 1; // nC0 = nCn = 1
//     }
//     if (r > n / 2) {
//         r = n - r; // Use symmetry property nCr = nC(n-r)
//     }
//     int numerator = 1;
//     int denominator = 1;
//     for (int i = 0; i < r; ++i) {
//         numerator *= (n - i);
//         denominator *= (i + 1);
//     }
//     return numerator / denominator;
// }


int factorial(int n) {
    int fact = 1;
    for (int i=1; i<=n; i++) {
        fact *= i;
    
    }
    return fact;
}

int nCr(int n, int r) {
    int fact_n = factorial(n);
    int fact_r = factorial(r);
    int fact_n_r = factorial(n - r);
    return fact_n / (fact_r * fact_n_r);
}

int main() {
    int n = 8, r = 2;
    // cout << "nCr(" << n << ", " << r << ") = " << nCr(n, r) << endl;
    // cout << "Factorial of " << n << " is: " << factorial(n) << endl;
    cout << nCr(n, r);
    return 0;
}