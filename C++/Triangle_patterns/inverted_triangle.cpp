#include <iostream>
using namespace std;

int main() {
    int n=4;
    for (int i=0; i<n; i++) {
        // spaces
        for (int j=0; j<i; j++) {
            cout << " ";
        }

        // nums
        for(int j=0; j<n-i; j++) {
            cout << (i+1);
        }
        cout << endl;
    }
    return 0;

}

//homework
int main() {
    int n=4;
    
    for (int i=0; i<n; i++) {
        // spaces count 
        for (int j=0; j<i; j++) {
            cout << " ";
        }

        char ch='A'+i;
        // nums count 
        for (int j=0; j<n-i; j++) {
            // nums to be printed
            // char ch = 'A' + i;
            cout << ch;
        }
        cout << endl;
    }
    return 0;
}
