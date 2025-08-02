#include <iostream>
using namespace std;

int main() {
    int n=2;

    for(int i=0; i<n; i++) {
        // spaces
        for (int j=0; j<n-i-1; j++) {
            cout << " ";
        }
        cout << '*';


        if (i!=0) {
            // spaces
            for (int j=0; j<2*i-1; j++){
                cout << " ";
            }
            cout << '*';

        }
        cout << endl;
    }
    
    // bottom
    for (int i=0; i<n-1; i++) {
        //spaces
        for (int j=0; j<i+1; j++) {
                cout << " ";
            }

        cout << "*";

        if ( i != n-2) {
            // spaces
            for (int j=0; j<2*(n-i)-5; j++) {
                cout << " ";
            }

            cout << "*";

        }
        cout << endl;
    }
    return 0;
}

// homework = BUTTERFLY PATTERN
        // *      *
        // **    **
        // ***  ***
        // ********
        // ********
        // ***  ***
        // **    **
        // *      *

int main() {
    int n=4;

    //top
    for (int i=0; i<n; i++) {
        // stars i+1
        for (int j=0; j<=i; j++) {
            cout << "*";
        }
        if (i != n) {
        for (int j=0; j<2*(n-i)-2; j++) {
            cout << " ";
        }
    }
        for (int j=1; j<=i+1; j++) {
            cout << "*";
        }
        cout << endl;
    }
    // bottom
    for (int i=0; i<n; i++) {
        for (int j=n-i; j>0; j--) {
            cout << "*";
        }
        
        // spaces 
        if (i != 0) {
            for (int j=0; j<2*i; j++) {
                cout << " ";
            }
            
        }
        for (int j=n-i; j>0; j--) {
            cout << "*";
        }

        cout << endl;       
        
    }    

    return 0;
}
