#include <iostream>
using namespace std;

int linearSearch(int arr[], int sz, int target) {
    for (int i=0; i < sz; i++) {
        if (arr[i] == target) {
            return i;
        } 
    }
    return -1;
}

int main() {
    int target = 8; 
    int arr[] = {1, 2, 3, 5, 6, 8, 10};
    int size = 7;

    cout << "Index of " << target << " = " << linearSearch(arr, size, target) << "th";
    return 0;
}