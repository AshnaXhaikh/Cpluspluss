#include <iostream>
using namespace std;

int main() {
    int i = 1;
    int n;
    cout << "enter a num: ";
    cin >> n;
    int sum =0;

    while (i <= n) {
        sum += i;
        i++;
    }
    cout << "sum = " << sum << endl;
    return 0;
}
// int main() {
//     int i = 1;
//     while (i <= 100) {
//         cout << i << endl;
//         i ++;
//     }
//     cout << endl;
//     return 0;
// }