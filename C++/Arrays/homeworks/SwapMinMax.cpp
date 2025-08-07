#include <iostream>
using namespace std;

void swapMinMax(int arr[], int sz) {
    int start = 0, end = sz -1;
    swap(arr[start], arr[end]);
}

int main () {
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    int size=7;

    swapMinMax(arr, size);
    for (int i=0; i<size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}