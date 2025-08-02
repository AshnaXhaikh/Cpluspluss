#include <iostream>
using namespace std;

int main() {

    int n=3;

    // outer loop runs n times
    for (int i=0; i<n; i++) {
        //spaces; n-i-1
        for (int j=0; j<n-i-1; j++) {
            cout << " ";
        }
        
        // nums 1 i+1
        for (int j=1; j<=i+1; j++) {
            cout << j;
        } 

        // nums2 i>=1
        for (int j=i; j>=1; j--) {
            cout << j;
        }
        cout << endl;
    }

    // MY Target PATTERN;
    //      a
    //     aba
    //    abcba

    // outer loop runs n times
    for (int i=0; i<n; i++) {

        //spaces; j<n-i-1
        for (int j=0; j<n-(i+1); j++) {
            cout << " ";
        }
       
        // nums 1 j<=i+'a'
        for (char j='a'; j<=i+'a'; j++) {
            cout << j;
        } 

        // nums2 j>='a'
        for (char j='a'+i-1; j>='a'; j--) {
            cout << char(j);        }
        cout << endl;
    }
    return 0;
}

// 02 - August - 2025
