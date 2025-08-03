#include <iostream>
using namespace std;

int digitSum=0;

int sumOfDigits(int n) {
    int digSum = 0;
    while (n > 0) {
        int lastDig = n % 10;
        n /= 10;

        digSum += lastDig;
    }
    return digSum;
}

int main() {
    cout << "Sum = " << sumOfDigits(1234) << endl; // 10
    return 0;
}