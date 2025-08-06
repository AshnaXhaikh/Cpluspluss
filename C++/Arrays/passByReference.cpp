#include <iostream>
using namespace std;


void Multiply2(int arr[], int size) {
    cout << "\nIn function: ";
    for(int i=0; i < size; i++) {
        arr[i] *= 2;
        cout << arr[i] << " ";
    }
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    Multiply2(arr, 5);
    
    cout << "\nIn main function: ";
    for (int i=0; i < 5; i++) {
        cout << arr[i] << " ";
    } 
    return 0;
}

// void test(int x, int y) {
//     x *= 2;
//     y *= 3;
//     cout << "\nx = " << x << "\ny = " << y;
// } 

// int main() {
//     int x = 4, y = 5; 
//     cout << "In main function: " << "\nx = " << x << "\ny = " << y; // 4, 5
//     cout << "\n\nIn test function: ";
//     test(x, y); // 4x2 = 8, 5x3 = 15

//     return 0;

// }

