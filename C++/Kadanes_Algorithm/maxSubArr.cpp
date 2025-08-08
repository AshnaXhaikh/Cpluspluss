#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> vec={1, 2, 3, 4, 5};
    int size=vec.size();

    // print Sub Arrays
    for(int st=0; st < size; st++) {
        for(int end=st; end < size; end++){
            for (int i=st; i<=end; i++){
                cout<<vec[i];
            }
            cout << " ";
        }
        cout << endl;
    }
    return 0;
}