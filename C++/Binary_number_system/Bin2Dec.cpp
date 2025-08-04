#include <iostream>
using namespace std;

// multiply with powwer of 2s (10^0, 10^1, 10^2, 10^3, ....)
int bin2Dec(int binNum) {
    int ans=0, pow=1;
   

    while (binNum > 0) {
        int rem = binNum % 10;
        ans += rem * pow;

        binNum /= 10;
        pow *= 2;
    }
    return ans;  // deicmal form

}

int main() {
    int bin;
    cout << "Enter a binary num: ";
    cin >> bin;

    cout << bin << " is = " << bin2Dec(bin) << endl;
    return 0;
}