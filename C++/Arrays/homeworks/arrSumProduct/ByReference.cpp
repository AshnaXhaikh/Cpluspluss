#include <iostream>
using namespace std;

void arrSumProduct(int arr[], int sz, int &sum, int &prod) {
    sum=0;
    prod=1;
    for (int i=0; i<sz; i++) {
        sum += arr[i];
        prod *= arr[i];
    }
}

int main() {
    int arr[] = {1, 3, 4, 5};
    int size = 4;
    int sum, prod;

    arrSumProduct(arr, size, sum, prod);
    cout << "Sum = " << sum << " Product = " << prod << endl;

    return 0;
}