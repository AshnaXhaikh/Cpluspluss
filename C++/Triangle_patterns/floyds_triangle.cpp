#include <iostream>
using namespace std;

// int main() {
//     int n = 3;

//     int num=1;
//     for (int i=0; i<n; i++) {
//         for (int j=i+1; j>0; j--) {
//             cout << num << " ";
//             num++;
//         }
//         cout << endl;
//     }
//     return 0;
// }

// home work
int main() {
    int n = 3; 
    
    char ch='A';
    for (int i=0; i<n; i++) {
        for (int j=i+1; j>0; j--) {
            cout << ch << " ";
            ch++;
        }
        cout << endl;
    }
    return 0;
}