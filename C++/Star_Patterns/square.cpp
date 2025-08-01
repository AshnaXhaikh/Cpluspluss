#include <iostream>
using namespace std;

int main() {
    int n = 3;
    char ch ='A';
    int num = 1;

    for (int i=0; i<n; i++) {
        for (int j=0; j<n; j++) {
            cout << ch << " ";
            ch+=1;
        }
        cout << endl;
    }
    cout << "Last char: " << ch << endl;

    for (int i=0; i<n; i++) {
        for (int j=0; j<n; j++) {
            cout << num << " ";
            num++;
        }
        cout << endl;
    }
    cout << "Last number: " << num << endl;
    return 0;



    // int n = 4;
    // char ch = 'A';

    // for (int i=0; i<n; i++) {

        
    //     for (int j=0; j<n; j++) {
    //         cout << ch;
    //         ch = ch + 1;
    //     }
    //     cout << endl;
    // }
    // return 0;
}
