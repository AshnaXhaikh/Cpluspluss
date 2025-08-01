#include <iostream>
using namespace std;

int main() {
    int n = 4;

    for (int i=0; i<n; i++) {
        
        for (int j=1; j<=(i+1); j++) {
            cout << j << " ";
            
        }
        
        cout << endl;
    }

    return 0;
}



// calculating n! (n factorial)
// int main() {  
//     int n;
//     cout << "Interger for factorial: ";
//     cin >> n;

//     int i = 1;

//     int factorial=1;

//     while (i<=n) {
//         factorial*=i;
//         i++;
//     }
    

//     // for (int i=1; i<=n; i++) {
//     //     factorial *= i;
//     // }
//     cout << "factorial: " << factorial << endl;
//     return 0;
// }
    
//     int sum=0;
//     int n=6;
//     int i=1;

//     while (i<=n) {
//         if (i%3 == 0) {
//             cout << i << "+" << endl;
//             sum += i;
//         }
//         i++; /// outside if block
//     }
//     return 0;
// }
 
//     int sum=0;
//     int n=6;
//               // if i is 3, then
//     for (int i=1; i<=n; i++) {
//         if (i % 3 == 0) {
//             cout << i << "+";
//             cout << endl;
//             sum+=i; // sum = 3 + 
//         } 
//     }
//        cout << "Sum is: " << sum;
//     return 0;
// }