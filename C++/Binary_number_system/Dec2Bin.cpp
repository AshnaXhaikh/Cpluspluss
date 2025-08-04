#include <iostream>
using namespace std;

int decToBin(int decNum) {
    int ans=0, pow=1;

    while(decNum > 0) { 
        int rem = decNum % 2; // taking the remainder
        decNum /= 2; // keeping the quotient

        ans += (rem * pow); // 101 = (1x10^2) + (0*10^1) + (1x10^1)
        pow *= 10;
    }
    return ans;
}

int main() {
    int n;
    cout << "Ente n: ";
    cin >> n;
     
    for (int i=1; i<=n; i++) {
        cout << i << " in binary = " << decToBin(i) << endl;
    }
    
    return 0;
}
