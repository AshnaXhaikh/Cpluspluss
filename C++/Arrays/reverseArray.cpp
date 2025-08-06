#include <iostream>
using namespace std;

void reverseArr(int arr[], int sz) {
    int start = 0 , end = sz - 1;

    while (start < end) { // Even Array
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

int main() {
    int arr[] = {1, 2, 3, 4, 5, 7, 8, 9};
    int size = 8;

    reverseArr(arr, size);

    for (int i=0; i<size; i++) {
        cout << arr[i] << " ";
    }

//     cout << arr; // PRINTS ADDRESS
//     cout << arr; does not print array elements
// This prints the memory address of the array, not its contents.
// You need to loop through the array to print its elements.
   return 0;
}