#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "enter no of start-lines: ";
    cin >> n;

    int m;
        cout << "enter no of stars: ";
        cin >> m;

    
    for (int i=1; i<=n; i++){

        for (int j=1; j<= m; j++) {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}