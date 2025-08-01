#include <iostream>
using namespace std;

// int main() {
//     int n;
//     cout << "Enter a number: ";
//     cin >> n;

//     for (int i=0; i<n; i++) {
//         for (int j=i+1; j>0; j--) {
//             cout << j << " ";
//         }
//         cout << endl;
//     }

//     // for (int i=n; i>=0; i--) {
//     //     cout << i << " ";
//     // }
    
//     return 0;
// }

// homework problem 

// A 
// B A
// C B A

int main() {
    int n;
    cout << "how many chars you want: ";
    cin >> n;

    // without variable for character
    cout << "without variable for character"<< endl;
    for (int i=0; i<n; i++) {
        for (int j='A'+i; j>('A'-1); j--) {
            cout << (char)j << " ";
            
        }
        cout << endl;
    }
    cout << endl;

    // with variable for character
    cout << "with variable for character"<< endl;
    for (int i=0; i<n; i++) {
        char ch='A';
        for (char j=ch+i; j>(ch-1); j--) {
            cout << j << " ";
        }
        cout << endl;
    }
    return 0;
}
