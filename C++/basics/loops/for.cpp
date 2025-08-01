#include <iostream>
using namespace std;

// sum of all odd numbers from 1 to N

int main() {
    int sum = 0;

    int n;
    cout << "Enter a number: ";
    cin >> n;
    for (int i =1; i <= n; i++) { // loop from 1 to n
        if (i % 2 != 0) { // check if i is odd
            sum += i; // add odd number to sum
        }
    }
    cout << "Sum of odd numbers = " << sum; // print the sum of odd numbers
    return 0;
}
// int main() {
//     int n = 10;
//     int sum = 0;
//     for (int i=1; i <= n; i++) {
//         sum += i;
//         if (i == 5) {
//             break;
//         }
//     }
//     cout << sum;
//     return 0;
// }