#include <iostream>
using namespace std;

// print the unique values from the array
void AllUniq(int arr[], int sz) {
   int uniq=0; 

    for (int i=0; i<sz; i++){
        int count = 0;
        for (int j=0; j<sz; j++) {
            if (arr[i] == arr[j]) {
                count++;
            }
        }
        if (count == 1) {
            cout << arr[i] << " ";
        }
    }
}

int main() {
    int arr[] = {2, 2, 3, 2, 4, 5};
    int size=6;

    AllUniq(arr, size);
    
    return 0;
}